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
    meta(content='TeapotCompressed.x3d',name='title'),
    meta(content='Compressed IndexedFaceSet example.',name='description'),
    meta(content='Martin Isenburg',name='creator'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='4 May 2003',name='created'),
    meta(content='5 May 2003',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='X3D VRML binary compression',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/ExperimentalBinaryCompression/TeapotCompressed.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='TeapotCompressed.x3d'),
    ExternProtoDeclare(appinfo='An ASCII-compressed IndexedFaceSet',name='CompressedIndexedFaceSet',url=["CodedCompressedPrototypes.x3d#CompressedIndexedFaceSet","https://www.web3d.org/x3d/content/examples/Basic/ExperimentalBinaryCompression/CodedCompressedPrototypes.x3d#CompressedIndexedFaceSet","CodedCompressedPrototypes.wrl#CompressedIndexedFaceSet","https://www.web3d.org/x3d/content/examples/Basic/ExperimentalBinaryCompression/CodedCompressedPrototypes.wrl#CompressedIndexedFaceSet"],
      field=[
      field(accessType='initializeOnly',appinfo='ASCII-compressed coordIndex and texCoordIndex values',name='code',type='SFString'),
      field(accessType='initializeOnly',appinfo='bounding box of texture coordinates (always 4 values minU minV maxU maxV)',name='box_tex',type='MFFloat'),
      field(accessType='initializeOnly',appinfo='number of quantization bits for texture coordinates',name='bits_tex',type='SFInt32'),
      field(accessType='initializeOnly',appinfo='bounding box of coordinates (always 6 values minX minY minZ maxX maxY maxZ)',name='box',type='MFFloat'),
      field(accessType='initializeOnly',appinfo='number of quantization bits for coordinates',name='bits',type='SFInt32')]),
    Viewpoint(description='1M view',position=(0.0,0.0,1.0)),
    Background(groundColor=[(0.05,0.1,0.3)],skyColor=[(0.05,0.1,0.3)]),
    Transform(rotation=(1,0,0,-1.57),scale=(0.1,0.1,0.1),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(1.0,1.0,0.0))),
        geometry=ProtoInstance(name='CompressedIndexedFaceSet',
          fieldValue=[
          fieldValue(name='code',value='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'),
          fieldValue(name='box',value=[-2.95609,-2.01033,0.004061,3.45695,1.98978,3.03026]),
          fieldValue(name='bits',value=10)]))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TeapotCompressed.py")
