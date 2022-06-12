require assimp
require strings
require daslib/defer

def printNodesHierarchy(depth:int; var node:aiNode?&)
    unsafe
        print("{repeat("-",depth)}{assimp_str(addr(node.mName))}\n")
        for i in range(0, int(node.mNumChildren))
            printNodesHierarchy(depth+1, node.mChildren[i])

[export]
def main
    unsafe
        let path = "character.dae"
        var scene = aiImportFile(path, 8u)
        defer <|
            scene |> aiReleaseImport
        
        var mesh = scene.mMeshes
        print("Meshes: {int(scene.mNumMeshes)}\n")
        print("Vertices:{int(mesh[0].mNumVertices)}\n")
        print("Faces:{int(mesh[0].mNumFaces)}\n")

        var rootNode = scene.mRootNode
        print("Node hierarchy:\n")
        printNodesHierarchy(1, rootNode)