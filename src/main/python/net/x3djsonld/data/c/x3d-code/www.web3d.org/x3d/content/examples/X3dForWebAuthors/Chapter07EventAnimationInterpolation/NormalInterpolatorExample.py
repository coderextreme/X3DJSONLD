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

newModel=X3D(profile='Interchange',version='3.3',
  head=head(
    children=[
    meta(content='NormalInterpolatorExample.x3d',name='title'),
    meta(content='Example normal (perpendicular vector) animation, where orange vectors show normal direction at each polygon vertex.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='3 May 2008',name='created'),
    meta(content='14 June 2020',name='modified'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter19-NormalsShading/Figure19.27SquareFaceAnimatingNormals.x3d',name='reference'),
    meta(content='X3D NormalInterpolator example',name='subject'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter07EventAnimationInterpolation/NormalInterpolatorExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='NormalInterpolator.x3d'),
    Viewpoint(description='Animating normals on right vertices of a quadrilateral',position=(0,0,8)),
    Viewpoint(description='Other side - note difference in animated shading',orientation=(0,1,0,3.14159),position=(0,0,-7)),
    Shape(
      geometry=IndexedFaceSet(DEF='FlatSquare',coordIndex=[0,1,2,3],normalIndex=[0,1,2,3],solid=False,
        coord=Coordinate(point=[(-2,-2,0),(2,-2,0),(2,2,0),(-2,2,0)]),
        #  Normal vector with 4 SFVec3f triplet values, one for each corner of quadrilateral 
        normal=Normal(DEF='AnimatedNormalNode',vector=[(0,0,1),(0,0,1),(0,0,1),(0,0,1)])),
      appearance=Appearance(
        material=Material(DEF='LightBlue',diffuseColor=(0.3,0.6,0.9)))),
    #  NormalInterpolator keyValue array must match sizes of target Normal vector and key arrays 
    #  Thus this keyValue array has 4 * 3 = 12 total SFVec3f triplet values 
    NormalInterpolator(DEF='NormalPath',key=[0,0.5,1],keyValue=[(0,0,1),(0,0,1),(0,0,1),(0,0,1),(0,0,1),(1,0,0),(1,0,0),(0,0,1),(0,0,1),(0,0,1),(0,0,1),(0,0,1)]),
    ROUTE(fromField='value_changed',fromNode='NormalPath',toField='set_vector',toNode='AnimatedNormalNode'),
    TimeSensor(DEF='Clock',cycleInterval=8,loop=True),
    ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='NormalPath'),
    #  This block above completes the primary functionality of this scene. More to follow, however! 
    #  ============================================================================================================== 
    #  Note that a Normal is not rendered - it is invisible. So this scene adds some lines to visualize what is happening. 
    Shape(
      geometry=IndexedLineSet(coordIndex=[0,1,-1,2,3,-1,4,5,-1,6,7,-1],
        coord=Coordinate(DEF='NormalVectors',point=[(-2,-2,0),(-2,-2,1),(2,-2,0),(2,-2,1),(2,2,0),(2,2,1),(-2,2,0),(-2,2,1)])),
      appearance=Appearance(
        material=Material(emissiveColor=(0.9,0.6,0.1)))),
    CoordinateInterpolator(DEF='NormalVectorsAnimation',key=[0,0.5,1],keyValue=[(-2,-2,0),(-2,-2,1),(2,-2,0),(2,-2,1),(2,2,0),(2,2,1),(-2,2,0),(-2,2,1),(-2,-2,0),(-2,-2,1),(2,-2,0),(3,-2,0),(2,2,0),(3,2,0),(-2,2,0),(-2,2,1),(-2,-2,0),(-2,-2,1),(2,-2,0),(2,-2,1),(2,2,0),(2,2,1),(-2,2,0),(-2,2,1)]),
    ROUTE(fromField='value_changed',fromNode='NormalVectorsAnimation',toField='point',toNode='NormalVectors'),
    ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='NormalVectorsAnimation')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for NormalInterpolatorExample.py")
