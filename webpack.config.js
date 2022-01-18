const path = require('path');

module.exports = {
  mode: 'development',
  entry: './src/main/node/loaderJQuery.js',
  output: {
    path: path.resolve(__dirname, 'src/main/node'),
    filename: 'loader-bundle.mjs',
  },
  resolve: {
      fallback: {
        fs: false,
	child_process: false,
        http: require.resolve("stream-http"),
        https: require.resolve("https-browserify")
      }
    }
};
