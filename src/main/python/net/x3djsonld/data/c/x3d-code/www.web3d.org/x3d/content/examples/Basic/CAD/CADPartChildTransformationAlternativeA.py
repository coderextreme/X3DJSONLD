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

newModel=X3D(profile='CADInterchange',version='3.1',
  head=head(
    children=[
    component(level=2,name='CADGeometry'),
    component(level=1,name='EnvironmentalEffects'),
    meta(content='CADPartChildTransformationAlternativeA.x3d',name='title'),
    meta(content='Developer scene to explore Mantis Issue 528 Alternative A for transformation of CADFace children: allow Transform node as child of CADFace.',name='description'),
    meta(content='Vince Marchetti, Don Brutzman, Hyokwang Lee, Dick Puk',name='creator'),
    meta(content='Vince Marchetti bushing generation using python scripts',name='translator'),
    meta(content='https://www.web3d.org/member-only/mantis/view.php?id=528',name='reference'),
    meta(content='This scene was produced for specification development, and is expected to validate and work.',name='information'),
    meta(content='29 June 2012',name='created'),
    meta(content='27 October 2019',name='modified'),
    meta(content='32.4.4 CADPart',name='specificationSection'),
    meta(content='https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/CADGeometry.html#CADPart',name='specificationUrl'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/CAD/CADPartChildTransformationAlternativeA.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='CADPartChildTransformationAlternativeA.x3d'),
    Background(skyColor=[(0.9607843,1,0.9607843)]),
    Viewpoint(description='Hello CAD bushing',orientation=(1,0,0,-0.321751),position=(0,5,15)),
    CADAssembly(name='DesignPatternAssembly',
      children=[
      CADPart(name='CADPartExample',
        #  the rotation and translation attributes serve to position the bushing within the assembly 
        children=[
        CADFace(name='outerSurface',
          shape=Shape(
            #  note solid='true' and so one-sided external rendering only 
            geometry=Cylinder(bottom=False,height=3,radius=2,top=False),
            appearance=Appearance(DEF='AppearanceGrey',
              material=Material(),))),
        CADFace(name='innerSurface',
          shape=Shape(
            #  note solid='false' and so two-sided internal + external rendering 
            geometry=Cylinder(bottom=False,height=3,solid=False,top=False),
            appearance=Appearance(USE='AppearanceGrey'))),
        CADFace(name='topCap',
          shape=Transform(rotation=(1,0,0,1.5708),translation=(0,1.5,0),
            children=[
            Shape(
              geometry=IndexedTriangleSet(ccw=True,colorPerVertex=True,index=[0,1,2,2,1,3,2,3,4,4,3,5,4,5,6,6,5,7,6,7,8,8,7,9,8,9,10,10,9,11,10,11,12,12,11,13,12,13,14,14,13,15,14,15,16,16,15,17,16,17,18,18,17,19,18,19,20,20,19,21,20,21,22,22,21,23,22,23,24,24,23,25,24,25,26,26,25,27,26,27,28,28,27,29,28,29,30,30,29,31,30,31,32,32,31,33,32,33,34,34,33,35,34,35,36,36,35,37,36,37,38,38,37,39,38,39,40,40,39,41,40,41,42,42,41,43,42,43,44,44,43,45,44,45,46,46,45,47,46,47,48,48,47,49,48,49,50,50,49,51,50,51,52,52,51,53,52,53,54,54,53,55,54,55,56,56,55,57,56,57,58,58,57,59,58,59,60,60,59,61,60,61,62,62,61,63,62,63,64,64,63,65],normalPerVertex=True,solid=True,
                coord=Coordinate(DEF='HollowCircleCoordinates',point=[(2,0,0),(1,0,0),(1.9616,0.3902,0),(0.9808,0.1951,0),(1.8478,0.7654,0),(0.9239,0.3827,0),(1.6629,1.1111,0),(0.8315,0.5556,0),(1.4142,1.4142,0),(0.7071,0.7071,0),(1.1111,1.6629,0),(0.5556,0.8315,0),(0.7654,1.8478,0),(0.3827,0.9239,0),(0.3902,1.9616,0),(0.1951,0.9808,0),(0,2,0),(0,1,0),(-0.3902,1.9616,0),(-0.1951,0.9808,0),(-0.7654,1.8478,0),(-0.3827,0.9239,0),(-1.1111,1.6629,0),(-0.5556,0.8315,0),(-1.4142,1.4142,0),(-0.7071,0.7071,0),(-1.6629,1.1111,0),(-0.8315,0.5556,0),(-1.8478,0.7654,0),(-0.9239,0.3827,0),(-1.9616,0.3902,0),(-0.9808,0.1951,0),(-2,0,0),(-1,0,0),(-1.9616,-0.3902,0),(-0.9808,-0.1951,0),(-1.8478,-0.7654,0),(-0.9239,-0.3827,0),(-1.6629,-1.1111,0),(-0.8315,-0.5556,0),(-1.4142,-1.4142,0),(-0.7071,-0.7071,0),(-1.1111,-1.6629,0),(-0.5556,-0.8315,0),(-0.7654,-1.8478,0),(-0.3827,-0.9239,0),(-0.3902,-1.9616,0),(-0.1951,-0.9808,0),(-0,-2,0),(-0,-1,0),(0.3902,-1.9616,0),(0.1951,-0.9808,0),(0.7654,-1.8478,0),(0.3827,-0.9239,0),(1.1111,-1.6629,0),(0.5556,-0.8315,0),(1.4142,-1.4142,0),(0.7071,-0.7071,0),(1.6629,-1.1111,0),(0.8315,-0.5556,0),(1.8478,-0.7654,0),(0.9239,-0.3827,0),(1.9616,-0.3902,0),(0.9808,-0.1951,0),(2,-0,0),(1,-0,0)])),
              appearance=Appearance(USE='AppearanceGrey'))])),
        CADFace(name='bottomCap',
          shape=Transform(rotation=(-1,0,0,1.5708),translation=(0,-1.5,0),
            children=[
            Shape(
              geometry=IndexedTriangleSet(ccw=True,colorPerVertex=True,index=[0,1,2,2,1,3,2,3,4,4,3,5,4,5,6,6,5,7,6,7,8,8,7,9,8,9,10,10,9,11,10,11,12,12,11,13,12,13,14,14,13,15,14,15,16,16,15,17,16,17,18,18,17,19,18,19,20,20,19,21,20,21,22,22,21,23,22,23,24,24,23,25,24,25,26,26,25,27,26,27,28,28,27,29,28,29,30,30,29,31,30,31,32,32,31,33,32,33,34,34,33,35,34,35,36,36,35,37,36,37,38,38,37,39,38,39,40,40,39,41,40,41,42,42,41,43,42,43,44,44,43,45,44,45,46,46,45,47,46,47,48,48,47,49,48,49,50,50,49,51,50,51,52,52,51,53,52,53,54,54,53,55,54,55,56,56,55,57,56,57,58,58,57,59,58,59,60,60,59,61,60,61,62,62,61,63,62,63,64,64,63,65],normalPerVertex=True,solid=True,
                coord=Coordinate(USE='HollowCircleCoordinates')),
              appearance=Appearance(USE='AppearanceGrey'))]))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for CADPartChildTransformationAlternativeA.py")
