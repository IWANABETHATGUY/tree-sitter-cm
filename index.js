try {
  module.exports = require("./build/Release/tree_sitter_cm_binding");
} catch (error) {
  try {
    module.exports = require("./build/Debug/tree_sitter_cm_binding");
  } catch (_) {
    throw error
  }
}

try {
  module.exports.nodeTypeInfo = require("./src/node-types.json");
} catch (_) {}
