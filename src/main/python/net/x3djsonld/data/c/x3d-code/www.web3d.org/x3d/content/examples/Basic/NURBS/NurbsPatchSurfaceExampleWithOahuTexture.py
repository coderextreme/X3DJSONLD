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
    component(level=1,name='NURBS'),
    meta(content='NurbsPatchSurfaceExampleWithOahuTexture.x3d',name='title'),
    meta(content='ImageTexture applied to animated NURBS patch using NurbsPatchSurface. Compare regular animation rendering to wireframe-mode rendering (if supported by X3D/VRML browser) in order to observe dynamic tessellation.',name='description'),
    meta(content='Jeffrey Weekley, Charles Adams',name='creator'),
    meta(content='6 February 2003',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='missing default values for knot and weight array fields in NurbsPatchSurface (weight default: all 1 values) ; not required by X3D specification, but some browsers may fail without them.',name='warning'),
    meta(content='under development, needs to be upgraded to final version of X3D NURBS nodes',name='warning'),
    meta(content='Oahu image prepared by David Colleen and Planet 9 Inc.',name='acknowledgement'),
    meta(content='http://www.planet9.com',name='reference'),
    meta(content='NURBS Surface Example',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/NURBS/NurbsPatchSurfaceExampleWithOahuTexture.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='NurbsPatchSurfaceExampleWithOahuTexture.x3d'),
    Viewpoint(description='animatedPlane',position=(3,2,40)),
    Transform(rotation=(1,0,0,-1.5),
      children=[
      Shape(
        geometry=NurbsPatchSurface(DEF='NS',solid=False,uDimension=5,uOrder=4,uTessellation=30,vDimension=5,vOrder=4,vTessellation=30,
          controlPoint=Coordinate(DEF='NC',point=[(-10,-10,0),(-10,-5,0),(-10,0,0),(-10,5,0),(-10,10,0),(-5,-10,0),(-5,-5,2.5),(-5,0,5),(-5,5,2.5),(-5,10,0),(0,-10,0),(0,-5,2.5),(0,0,5),(0,5,2.5),(0,10,0),(5,-10,0),(5,-5,2.5),(5,0,15),(5,5,2.5),(5,10,0),(10,-10,0),(10,-5,0),(10,0,0),(10,5,0),(10,10,0)])),
        appearance=Appearance(
          texture=ImageTexture(url=["PearlHarborLowResolution.jpg","https://savage.nps.edu/Savage/Locations/Hawaii/PearlHarborLowResolution.jpg"])))]),
    TimeSensor(DEF='TS',cycleInterval=6,loop=True),
    CoordinateInterpolator(DEF='CI',key=[0,.5,1],keyValue=[(-10,-10,0),(-10,-5,0),(-10,0,0),(-10,5,0),(-10,10,0),(-5,-10,0),(-5,-5,2.5),(-5,0,5),(-5,5,2.5),(-5,10,0),(0,-10,0),(0,-5,2.5),(0,0,5),(0,5,2.5),(0,10,0),(5,-10,0),(5,-5,2.5),(5,0,15),(5,5,2.5),(5,10,0),(10,-10,0),(10,-5,0),(10,0,0),(10,5,0),(10,10,0),(-10,-10,0),(-10,-5,0),(-10,0,0),(-10,5,0),(-10,10,0),(-5,-10,0),(-5,-5,0),(-5,0,0),(-5,5,0),(-5,10,0),(0,-10,0),(0,-5,0),(0,0,0),(0,5,0),(0,10,0),(5,-10,0),(5,-5,0),(5,0,0),(5,5,0),(5,10,0),(10,-10,0),(10,-5,0),(10,0,0),(10,5,0),(10,10,0),(-10,-10,0),(-10,-5,0),(-10,0,0),(-10,5,0),(-10,10,0),(-5,-10,0),(-5,-5,2.5),(-5,0,5),(-5,5,2.5),(-5,10,0),(0,-10,0),(0,-5,2.5),(0,0,5),(0,5,2.5),(0,10,0),(5,-10,0),(5,-5,2.5),(5,0,15),(5,5,2.5),(5,10,0),(10,-10,0),(10,-5,0),(10,0,0),(10,5,0),(10,10,0)]),
    ROUTE(fromField='fraction_changed',fromNode='TS',toField='set_fraction',toNode='CI'),
    ROUTE(fromField='value_changed',fromNode='CI',toField='set_point',toNode='NC')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for NurbsPatchSurfaceExampleWithOahuTexture.py")
