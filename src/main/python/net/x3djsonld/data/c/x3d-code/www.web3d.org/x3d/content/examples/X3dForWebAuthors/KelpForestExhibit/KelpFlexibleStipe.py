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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='KelpFlexibleStipe.x3d',name='title'),
    meta(content='Matthew Braun',name='creator'),
    meta(content='2 October 2001',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='An extruded piece of kelp for the Kelp Forest project. Bulb is separate.',name='description'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/KelpFlexibleStipe.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='KelpFlexibleStipe.x3d'),
    Viewpoint(description='Kelp stipe and holdfast',position=(0,5,13)),
    #  Animation clock 
    TimeSensor(DEF='CLOCK',cycleInterval=4,loop=True),
    CoordinateInterpolator(DEF='KELP_BEND',key=[0.0,0.22,0.50,0.72,1.0],keyValue=[(0.00,0.00,0.00),(0.00,2.00,0.00),(0.00,4.00,0.00),(0.00,6.00,0.00),(0.00,8.00,0.00),(0.00,10.00,0.00),(0.00,12.00,0.00),(0.00,14.00,0.00),(0.00,16.00,0.00),(0.00,18.00,0.00),(0.26,19.00,0.00),(1.00,19.74,0.00),(2.00,20.00,0.00),(7.00,20.00,0.00),(0.00,0.00,0.00),(0.02,2.00,0.00),(0.06,4.00,0.00),(0.14,6.00,0.00),(0.24,8.00,0.00),(0.36,10.00,0.00),(0.50,12.00,0.00),(0.66,14.00,0.00),(0.83,16.00,0.00),(1.02,18.00,0.00),(1.24,19.00,0.00),(1.75,19.74,0.00),(3.25,20.00,0.00),(8.25,20.00,0.00),(0.00,0.00,0.00),(0.00,2.00,0.00),(0.00,4.00,0.00),(0.00,6.00,0.00),(0.00,8.00,0.00),(0.00,10.00,0.00),(0.00,12.00,0.00),(0.00,14.00,0.00),(0.00,16.00,0.00),(0.00,18.00,0.00),(0.26,19.00,0.00),(1.00,19.74,0.00),(2.00,20.00,0.00),(7.00,20.00,0.00),(0.00,0.00,0.00),(-0.03,2.00,0.00),(-0.12,4.00,0.00),(-0.25,6.00,0.00),(-0.41,8.00,0.00),(-0.59,10.00,0.00),(-0.75,12.00,0.00),(-0.88,14.00,0.00),(-0.97,16.00,0.00),(-1.00,18.00,0.00),(-0.74,19.00,0.00),(0.00,19.74,0.00),(1.00,20.00,0.00),(6.00,20.00,0.00),(0.00,0.00,0.00),(0.00,2.00,0.00),(0.00,4.00,0.00),(0.00,6.00,0.00),(0.00,8.00,0.00),(0.00,10.00,0.00),(0.00,12.00,0.00),(0.00,14.00,0.00),(0.00,16.00,0.00),(0.00,18.00,0.00),(0.26,19.00,0.00),(1.00,19.74,0.00),(2.00,20.00,0.00),(7.00,20.00,0.00)]),
    #  Geometry 
    Transform(scale=(0.5,0.5,0.5),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(ambientIntensity=.25,diffuseColor=(0.57,0.40,0.10),shininess=0.92,transparency=0.50)),
        geometry=Extrusion(DEF='KELP',ccw=False,convex=False,creaseAngle=.78,crossSection=[(1.00,0.00),(0.87,0.50),(0.50,0.87),(0.00,1.00),(-0.50,0.87),(-0.87,0.50),(-1.00,0.00),(-0.87,-0.50),(-0.50,-0.87),(0.00,-1.00),(0.50,-0.87),(0.87,-0.50),(1.00,0.00)],endCap=False,scale=[(0.30,0.30),(0.29,0.29),(0.28,0.28),(0.27,0.27),(0.26,0.26),(0.25,0.25),(0.24,0.24),(0.23,0.23),(0.22,0.22),(0.21,0.21),(0.19,0.19),(0.16,0.16),(0.11,0.11),(0.05,0.05),(0.00,0.00)],spine=[(0.00,1.00,0.00),(0.00,0.00,0.00),(0.00,1.00,0.00),(0.00,2.00,0.00),(0.00,3.00,0.00),(0.00,4.00,0.00),(0.00,5.00,0.00),(0.00,6.00,0.00),(0.00,7.00,0.00),(0.00,8.00,0.00),(0.00,9.00,0.00),(0.13,9.50,0.00),(0.50,9.87,0.00),(1.00,10.00,0.00),(5.00,10.00,0.00)]))]),
    Transform(scale=(0.5,0.5,0.5),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(ambientIntensity=.25,diffuseColor=(0.57,0.30,0.10),emissiveColor=(0.52,0.30,0.10),shininess=0.92,transparency=0.70)),
        geometry=Extrusion(DEF='INNER_KELP',ccw=False,convex=False,creaseAngle=.78,crossSection=[(0.80,0.00),(0.69,0.40),(0.40,0.69),(0.00,0.80),(-0.40,0.69),(-0.69,0.40),(-0.80,0.00),(-0.69,-0.40),(-0.40,-0.69),(0.00,-0.80),(0.40,-0.69),(0.69,-0.40),(0.80,0.00)],endCap=False,scale=[(0.30,0.30),(0.29,0.29),(0.28,0.28),(0.27,0.27),(0.26,0.26),(0.25,0.25),(0.24,0.24),(0.23,0.23),(0.22,0.22),(0.21,0.21),(0.19,0.19),(0.16,0.16),(0.11,0.11),(0.00,0.00)],spine=[(0.00,0.00,0.00),(0.00,1.00,0.00),(0.00,2.00,0.00),(0.00,3.00,0.00),(0.00,4.00,0.00),(0.00,5.00,0.00),(0.00,6.00,0.00),(0.00,7.00,0.00),(0.00,8.00,0.00),(0.00,9.00,0.00),(0.13,9.50,0.00),(0.50,9.87,0.00),(1.00,10.00,0.00),(5.00,10.00,0.00)]))]),
    Transform(
      children=[
      Shape(
        appearance=Appearance(
          material=Material(ambientIntensity=.25,diffuseColor=(0.57,0.30,0.10),shininess=0.92)),
        geometry=Cone(bottomRadius=0.5,height=0.5))]),
    ROUTE(fromField='fraction_changed',fromNode='CLOCK',toField='set_fraction',toNode='KELP_BEND'),
    ROUTE(fromField='value_changed',fromNode='KELP_BEND',toField='set_spine',toNode='KELP'),
    ROUTE(fromField='value_changed',fromNode='KELP_BEND',toField='set_spine',toNode='INNER_KELP')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for KelpFlexibleStipe.py")
