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
    meta(content='Figure15_17WigglingSnake.x3d',name='title'),
    meta(content='Figure 15.17, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland',name='creator'),
    meta(content='http://www.wiley.com/legacy/compbooks/vrml2sbk/ch15/15fig17.htm',name='reference'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='20 August 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='A wiggling snake whose spine is animated using a CoordinateInterpolator node.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter15Extrusion/Figure15_17WigglingSnake.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  Computational cost of Extrusion compared to IndexedFaceSet: quicker to download, takes time to calculate polygonal faces and normals during initial loading, equally fast at run time. 
    #  Authoring capabilities of Extrusion compared to IndexedFaceSet: can be more complicated to express, but also can provide great detail with much less effort. 
    #  Animation considerations: computational cost of modifying spine and recalcuting all polygons/shading during each screen redraw is extremely high, though authorability remains very simple. 
    #  First position and rotate viewpoint into positive-X-Y-Z octant, looking at object center 
    children=[
    WorldInfo(title='Figure15_17WigglingSnake.x3d'),
    Viewpoint(description='Wiggling snake, seen from behind, using Extrusion and OrientationInterpolator',orientation=(-0.37796,0.91249,0.15656,0.85225),position=(10,5,10)),
    Viewpoint(description='Snake head',orientation=(0.18581,0.96486,0.18581,-1.606566),position=(-10,4,0)),
    #  Snake 
    Transform(translation=(0,0.3,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,1.0,0.2))),
        geometry=Extrusion(DEF='SNAKE',creaseAngle=1.57,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.0),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],scale=[(0.050,0.020),(0.200,0.100),(0.400,0.150),(0.250,0.250),(0.270,0.270),(0.300,0.300),(0.300,0.300),(0.300,0.300),(0.300,0.300),(0.300,0.300),(0.290,0.290),(0.290,0.290),(0.290,0.290),(0.280,0.280),(0.280,0.280),(0.250,0.250),(0.200,0.200),(0.100,0.100),(0.050,0.050)],spine=[(-4.100,0.0,0.000),(-4.0,0.0,0.000),(-3.529,0.0,0.674),(-3.059,0.0,0.996),(-2.588,0.0,0.798),(-2.118,0.0,0.184),(-1.647,0.0,-0.526),(-1.176,0.0,-0.962),(-0.706,0.0,-0.895),(-0.235,0.0,-0.361),(0.235,0.0,0.361),(0.706,0.0,0.895),(1.176,0.0,0.962),(1.647,0.0,0.526),(2.118,0.0,-0.184),(2.588,0.0,-0.798),(3.059,0.0,-0.996),(3.529,0.0,-0.674),(4.0,0.0,0.0)]))]),
    #  Animation clock 
    TimeSensor(DEF='CLOCK',cycleInterval=4,loop=True),
    #  each keyValue block corresponds to spine position at time 0.0, 0.25, 0.5, 0.75 and 1.0 (matching endpoints are closed so that looping is continuous) 
    #  Animate the snake spine 
    CoordinateInterpolator(DEF='SNAKE_WIGGLE',key=[0.0,0.25,0.50,0.75,1.0],keyValue=[(-4.100,0,0.000),(-4.0,0,0.000),(-3.529,0,0.674),(-3.059,0,0.996),(-2.588,0,0.798),(-2.118,0,0.184),(-1.647,0,-0.526),(-1.176,0,-0.962),(-0.706,0,-0.895),(-0.235,0,-0.361),(0.235,0,0.361),(0.706,0,0.895),(1.176,0,0.962),(1.647,0,0.526),(2.118,0,-0.184),(2.588,0,-0.798),(3.059,0,-0.996),(3.529,0,-0.674),(4.0,0,0.000),(-4.100,0,-1.000),(-4.0,0,-1.000),(-3.529,0,-0.739),(-3.059,0,-0.092),(-2.588,0,0.603),(-2.118,0,0.983),(-1.647,0,0.850),(-1.176,0,0.274),(-0.706,0,-0.446),(-0.235,0,-0.932),(0.235,0,-0.932),(0.706,0,-0.446),(1.176,0,0.274),(1.647,0,0.850),(2.118,0,0.983),(2.588,0,0.603),(3.059,0,-0.092),(3.529,0,-0.739),(4.0,0,-1.000),(-4.100,0,0.000),(-4.0,0,0.000),(-3.529,0,-0.674),(-3.059,0,-0.996),(-2.588,0,-0.798),(-2.118,0,-0.184),(-1.647,0,0.526),(-1.176,0,0.962),(-0.706,0,0.895),(-0.235,0,0.361),(0.235,0,-0.361),(0.706,0,-0.895),(1.176,0,-0.962),(1.647,0,-0.526),(2.118,0,0.184),(2.588,0,0.798),(3.059,0,0.996),(3.529,0,0.674),(4.0,0,0.000),(-4.100,0,1.000),(-4.0,0,1.000),(-3.529,0,0.739),(-3.059,0,0.092),(-2.588,0,-0.603),(-2.118,0,-0.983),(-1.647,0,-0.850),(-1.176,0,-0.274),(-0.706,0,0.446),(-0.235,0,0.932),(0.235,0,0.932),(0.706,0,0.446),(1.176,0,-0.274),(1.647,0,-0.850),(2.118,0,-0.983),(2.588,0,-0.603),(3.059,0,0.092),(3.529,0,0.739),(4.0,0,1.000),(-4.100,0,0.000),(-4.0,0,0.000),(-3.529,0,0.674),(-3.059,0,0.996),(-2.588,0,0.798),(-2.118,0,0.184),(-1.647,0,-0.526),(-1.176,0,-0.962),(-0.706,0,-0.895),(-0.235,0,-0.361),(0.235,0,0.361),(0.706,0,0.895),(1.176,0,0.962),(1.647,0,0.526),(2.118,0,-0.184),(2.588,0,-0.798),(3.059,0,-0.996),(3.529,0,-0.674),(4.0,0,0.0)]),
    ROUTE(fromField='fraction_changed',fromNode='CLOCK',toField='set_fraction',toNode='SNAKE_WIGGLE'),
    ROUTE(fromField='value_changed',fromNode='SNAKE_WIGGLE',toField='set_spine',toNode='SNAKE')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Figure15_17WigglingSnake.py")
