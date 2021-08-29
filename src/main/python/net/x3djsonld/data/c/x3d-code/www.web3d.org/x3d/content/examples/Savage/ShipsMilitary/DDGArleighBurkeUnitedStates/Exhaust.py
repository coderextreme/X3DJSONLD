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
    meta(content='Exhaust.x3d',name='title'),
    meta(content='Figure 25.1, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland',name='creator'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='14 January 2014',name='modified'),
    meta(content='Exhaust.',name='description'),
    meta(content='https://savage.nps.edu/Savage/DDGArleighBurkeUnitedStates/Exhaust.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Viewpoint(description='Torch (high detail)',position=(0,0,2)),
    Transform(DEF='EXHAUST',scale=(0.5,0.5,0.5),translation=(0,0,0.2),
      children=[
      Shape(DEF='Flames',
        #  No appearance, use emissive shading 
        geometry=IndexedFaceSet(coordIndex=[0,1,2,-1,3,4,5,-1,6,7,8,-1],
          coord=Coordinate(point=[(0.25,0.0,0.00),(0.15,1.0,0.10),(0.05,0.0,0.15),(0.18,0.0,0.05),(0.00,1.2,0.05),(-0.10,0.0,0.05),(-0.00,0.0,0.15),(-0.13,0.8,0.10),(-0.25,0.0,0.00)]),
          color=Color(color=[(1.0,0.0,0.0),(0.9,0.5,0),(1.0,0.0,0.0),(0.9,0.3,0),(1.0,1.0,0.0),(0.9,0.3,0),(0.7,0.1,0.2),(0.9,0.8,0),(1.0,0.0,0.0)]))),
      Transform(rotation=(0,1,0,1.57),scale=(0.9,0.9,1),
        children=[
        Shape(USE='Flames')]),
      Transform(rotation=(0,1,0,-1.57),scale=(0.9,0.9,1),
        children=[
        Shape(USE='Flames')])]),
    TimeSensor(DEF='EXHAUSTCLOCK',loop=True),
    PositionInterpolator(DEF='EXHINT',key=[0,.5,1],keyValue=[(.1,.1,.1),(.5,.5,.5),(1,1,1)]),
    ROUTE(fromField='fraction_changed',fromNode='EXHAUSTCLOCK',toField='set_fraction',toNode='EXHINT'),
    ROUTE(fromField='value_changed',fromNode='EXHINT',toField='set_scale',toNode='EXHAUST')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Exhaust.py")
