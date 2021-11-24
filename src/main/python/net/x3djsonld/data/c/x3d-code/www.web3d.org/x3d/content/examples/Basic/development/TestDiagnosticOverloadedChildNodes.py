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

newModel=X3D(profile='Full',version='3.3',
  head=head(
    children=[
    meta(content='TestDiagnosticOverloadedChildNodes.x3d',name='title'),
    meta(content='Test error diagnostics for multiple Appearance child nodes, since this possibility is no longer precluded by DTD or Schema due to addition of Shader nodes.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='30 December 2005',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Test scene validation, used for test purposes only',name='warning'),
    meta(content='VRML97 translation incomplete',name='error'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/TestDiagnosticOverloadedChildNodes.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='TestDiagnosticOverloadedChildNodes.x3d'),
    Shape(
      appearance=Appearance(
        material=Material(DEF='a'),
        Material(DEF='b')
        texture=ImageTexture(DEF='c'),
        ImageTexture3D(DEF='d'),
        ImageCubeMapTexture(DEF='e'),
        MultiTexture(DEF='f'),
        PixelTexture3D(DEF='g'),
        ComposedTexture3D(DEF='h'),
        ComposedCubeMapTexture(DEF='i'),
        PixelTexture(DEF='j'),
        GeneratedCubeMapTexture(DEF='k')
        textureTransform=MultiTextureTransform(DEF='l'),
        TextureTransformMatrix3D(DEF='m'),
        TextureTransform(DEF='n'),
        TextureTransform3D(DEF='o')
        shaders=ComposedShader(DEF='p'),
        PackagedShader(DEF='q'),
        ProgramShader(DEF='r')),
      geometry=Text(string=["TestMultipleAppearanceChildNodes.x3d","is a test scene only"],
        fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"]))),
    Shape(
      geometry=IndexedTriangleFanSet(ccw=True,colorPerVertex=True,normalPerVertex=True,solid=True,
        color=Color(DEF='t'),
        ColorRGBA(DEF='u')
        coord=Coordinate(DEF='v'),
        CoordinateDouble(DEF='w'),
        GeoCoordinate(DEF='x')
        fogCoord=FogCoordinate(DEF='y'),
        FogCoordinate(DEF='z')
        normal=Normal(DEF='z1'),
        Normal(DEF='z2')
        texCoord=TextureCoordinate(DEF='z3'),
        TextureCoordinateGenerator(DEF='z4'),
        NurbsTextureCoordinate(DEF='z5'),
        MultiTextureCoordinate(DEF='z6'),
        TextureCoordinate3D(DEF='z7'),
        TextureCoordinate4D(DEF='z8')))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TestDiagnosticOverloadedChildNodes.py")
