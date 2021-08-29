###############################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach greatly simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.

from x3d import *

###############################################

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='CodedCompressedPrototypes.x3d',name='title'),
    meta(content='Prototypes for CodedIndexedFaceSet decoding and CompressedIndexedFaceSet decompression, with links to example scenes.',name='description'),
    meta(content='Martin Isenburg',name='creator'),
    meta(content='X3D-Edit VRML importer',name='translator'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='26 September 2002',name='created'),
    meta(content='28 April 2003',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://www.cs.unc.edu/~isenburg/ac/models',name='reference'),
    meta(content='http://www.cs.unc.edu/~isenburg/research/asciicoder',name='reference'),
    meta(content='http://www.cs.unc.edu/~isenburg/research/asciicoder/coder',name='reference'),
    meta(content="Martin Isenburg, Jack Snoeyink Binary Compression Rates for ASCII Formats, accepted for Web3D'03, March 2003",name='reference'),
    meta(content='isenburg/is-bcraf-03.pdf',name='reference'),
    meta(content='http://www.cs.unc.edu/~isenburg/research/papers/is-bcraf-03.pdf',name='reference'),
    meta(content="Martin Isenburg, Jack Snoeyink, Coding with ASCII: compact, yet text-based 3D content, Proceedings of the 1st International Symposium on 3D Data Processing, Visualization and Transmission'02 (Invited Paper), pages 609 - 616, June 2002.",name='reference'),
    meta(content='isenburg/is-cwa-02.pdf',name='reference'),
    meta(content='http://www.cs.unc.edu/~isenburg/papers/is-cwa-02.pdf',name='reference'),
    meta(content="Martin Isenburg, Jack Snoeyink Coding Polygon Meshes as Compressable ASCII, Proceedings of Web3D Symposium'02 (Best Paper), pages 1 - 10, February 2002",name='reference'),
    meta(content='isenburg/is-cpmca-02.pdf',name='reference'),
    meta(content='http://www.cs.unc.edu/~isenburg/papers/is-cpmca-02.pdf',name='reference'),
    meta(content='X3D VRML binary compression',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/ExperimentalBinaryCompression/CodedCompressedPrototypes.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  ==================== 
    children=[
    WorldInfo(title='CodedCompressedPrototypes.x3d'),
    ProtoDeclare(appinfo='An ASCII-coded IndexedFaceSet',name='CodedIndexedFaceSet',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',appinfo='ASCII-coded coordIndex and texCoordIndex values',name='code',type='MFInt32',value=[0]),
        field(accessType='initializeOnly',appinfo='dequantization multiplier for Coordinate values',name='pos',type='SFFloat',value=0.0),
        field(accessType='initializeOnly',appinfo='dequantization multiplier for TextureCoordinate values',name='tex',type='SFFloat',value=0.0),
        field(accessType='initializeOnly',appinfo='Coordinate node',name='coord',type='SFNode',
          #  not initialized by default 
          ),
        field(accessType='initializeOnly',appinfo='TextureCoordinate node',name='texCoord',type='SFNode',
          #  not initialized by default 
          )]),
      ProtoBody=ProtoBody(
        children=[
        IndexedFaceSet(DEF='DecodedIFS',
          IS=IS(
            connect=[
            connect(nodeField='coord',protoField='coord'),
            connect(nodeField='texCoord',protoField='texCoord')])),
        #  Warning: VRML97-style scripting, not X3D Scene Authoring Interface (SAI) 
        Script(DEF='DecoderScript',directOutput=True,url=["isenburg/Vrml97Scripts/CodedIndexedFaceSet.class","https://www.web3d.org/x3d/content/examples/Basic/ExperimentalBinaryCompression/isenburg/Vrml97Scripts/CodedIndexedFaceSet.class"],
          field=[
          field(accessType='initializeOnly',name='code',type='MFInt32'),
          field(accessType='initializeOnly',name='pos',type='SFFloat'),
          field(accessType='initializeOnly',name='tex',type='SFFloat'),
          field(accessType='initializeOnly',name='IFS',type='SFNode',
            children=[
            IndexedFaceSet(USE='DecodedIFS')])],
          IS=IS(
            connect=[
            connect(nodeField='code',protoField='code'),
            connect(nodeField='pos',protoField='pos'),
            connect(nodeField='tex',protoField='tex')]))])),
    #  ==================== 
    ProtoDeclare(appinfo='An ASCII-compressed IndexedFaceSet',name='CompressedIndexedFaceSet',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',appinfo='ASCII-compressed coordIndex and texCoordIndex values',name='code',type='SFString'),
        field(accessType='initializeOnly',appinfo='bounding box of texture coordinates (always 4 values minU minV maxU maxV)',name='box_tex',type='MFFloat',value=[0,0,1,1]),
        field(accessType='initializeOnly',appinfo='number of quantization bits for texture coordinates',name='bits_tex',type='SFInt32',value=0),
        field(accessType='initializeOnly',appinfo='bounding box of coordinates (always 6 values minX minY minZ maxX maxY maxZ)',name='box',type='MFFloat',value=[0,0,0,1,1,1]),
        field(accessType='initializeOnly',appinfo='number of quantization bits for coordinates',name='bits',type='SFInt32',value=0)]),
      ProtoBody=ProtoBody(
        children=[
        IndexedFaceSet(DEF='DecompressedIFS'),
        #  Warning: VRML97-style scripting, not X3D Scene Authoring Interface (SAI) 
        Script(DEF='DecompressionScript',directOutput=True,url=["isenburg/Vrml97Scripts/CompressedIndexedFaceSet.class","https://www.web3d.org/x3d/content/examples/Basic/ExperimentalBinaryCompression/isenburg/Vrml97Scripts/CompressedIndexedFaceSet.class"],
          field=[
          field(accessType='initializeOnly',name='code',type='SFString'),
          field(accessType='initializeOnly',name='box_tex',type='MFFloat'),
          field(accessType='initializeOnly',name='bits_tex',type='SFInt32'),
          field(accessType='initializeOnly',name='box',type='MFFloat'),
          field(accessType='initializeOnly',name='bits',type='SFInt32'),
          field(accessType='initializeOnly',name='IFS',type='SFNode',
            children=[
            IndexedFaceSet(USE='DecompressedIFS')])],
          IS=IS(
            connect=[
            connect(nodeField='code',protoField='code'),
            connect(nodeField='box_tex',protoField='box_tex'),
            connect(nodeField='bits_tex',protoField='bits_tex'),
            connect(nodeField='box',protoField='box'),
            connect(nodeField='bits',protoField='bits')]))])),
    #  ==================== 
    Viewpoint(description='Select an example scene',position=(0,0,12)),
    Background(groundColor=[(0.05,0.1,0.3)],skyColor=[(0.05,0.1,0.3)]),
    Transform(translation=(7,0,0),
      children=[
      Transform(translation=(0,3,0),
        children=[
        Anchor(description='Click for IndexedFaceSet example',url=["Fish.x3d","https://www.web3d.org/x3d/content/examples/Basic/ExperimentalBinaryCompression/Fish.x3d","Fish.wrl","https://www.web3d.org/x3d/content/examples/Basic/ExperimentalBinaryCompression/Fish.wrl"],
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.6,0.6,0.2))),
            geometry=Text(length=[0],string=["Fish IndexedFaceSet 442 KB"],
              fontStyle=FontStyle(DEF='TextFont',justify=["END","MIDDLE"],size=1.25,style_='BOLD')))])]),
      Transform(
        children=[
        Anchor(description='Click for CodedIndexedFaceSet example',url=["FishCoded.x3d","https://www.web3d.org/x3d/content/examples/Basic/ExperimentalBinaryCompression/FishCoded.x3d","FishCoded.wrl","https://www.web3d.org/x3d/content/examples/Basic/ExperimentalBinaryCompression/FishCoded.wrl"],
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.6,0.6,0.2))),
            geometry=Text(length=[0],string=["FishCoded 96 KB"],
              fontStyle=FontStyle(USE='TextFont')))])]),
      Transform(translation=(0,-3,0),
        children=[
        Anchor(description='Click for CompressedIndexedFaceSet example',url=["FishCompressed.x3d","https://www.web3d.org/x3d/content/examples/Basic/ExperimentalBinaryCompression/FishCompressed.x3d","FishCompressed.wrl","https://www.web3d.org/x3d/content/examples/Basic/ExperimentalBinaryCompression/FishCompressed.wrl"],
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.6,0.6,0.2))),
            geometry=Text(length=[0],string=["FishCompressed 22 KB"],
              fontStyle=FontStyle(USE='TextFont')))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for CodedCompressedPrototypes.py")
