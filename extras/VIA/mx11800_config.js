const fs = require('fs');
const mx11800 = require('./mx11800_config.json');

let rawconfig = fs.readFileSync('./config.json');
let config = JSON.parse(rawconfig);

const remoteData = config && config.remoteData;
const definitions = remoteData && remoteData.definitions;

if (definitions && mx11800) {
  definitions[mx11800.vendorProductId.toString()] = mx11800;

  fs.writeFile('./config.json', JSON.stringify(config, null, 2), (err) => {
    if (err) throw err;
    console.log('The file has been saved!');
  });
} else {
  console.log('error!')
}