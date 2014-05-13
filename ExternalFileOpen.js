
window.ExternalFileOpen = {
    
    openWith: function ( path, uti, options, success, fail) {
        if(options == undefined)
            return cordova.exec(success, fail, "ExternalFileOpen", "openWith", [path, uti]);
        return cordova.exec(success, fail, "ExternalFileOpen", "openWith", [path, uti, options]);
    }  
};

module.exports = ExternalFileOpen;
