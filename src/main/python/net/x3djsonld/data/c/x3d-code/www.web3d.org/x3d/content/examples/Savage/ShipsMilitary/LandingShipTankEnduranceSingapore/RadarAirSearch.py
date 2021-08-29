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
    meta(content='RadarAirSearch.x3d',name='title'),
    meta(content='Boon Chuan LEE',name='creator'),
    meta(content='3D Radar / Air and Surface Search Radar',name='description'),
    meta(content='26 July 2001',name='created'),
    meta(content='2 January 2019',name='modified'),
    meta(content="Ship's crane situated on helo deck near superstructure",name='description'),
    meta(content='http://www.mindef.gov.sg/navy/pict/ship/ship2.html',name='reference'),
    meta(content='http://www.mindef.gov.sg/navy/pict/ship/pics/shp_nls1.jpg',name='reference'),
    meta(content='http://www.mindef.gov.sg/navy/pict/ship/pics/shp_nls2.jpg',name='reference'),
    meta(content='http://www.mindef.gov.sg/navy/pict/ship/pics/shp_nls3.jpg',name='reference'),
    meta(content='http://www.mindef.gov.sg/navy/pict/ship/pics/shp_nls4.jpg',name='reference'),
    meta(content='http://www.janesonline.com',name='reference'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/RadarAirSearch.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(groundAngle=[1.309,1.570796],groundColor=[(0,.2,1),(0,.5,1),(0.8,0.9,0.9)],skyAngle=[1.309,1.571],skyColor=[(.5,.5,.9),(0,.5,1),(1,0.8,0.8)]),
    Group(
      children=[
      Transform(DEF='Scanner',
        children=[
        Shape(
          geometry=Extrusion(crossSection=[(-1.50,-0.50),(-1.50,0.50),(-1.20,0.60),(1.20,0.60),(1.50,0.50),(1.50,-0.50),(1.20,-0.60),(-1.20,-0.60),(-1.50,-0.50)],scale=[(1,1),(1,1)],spine=[(0,0,0.2),(0,0,0.4)]),
          appearance=Appearance(
            material=Material(diffuseColor=(0.5,0.5,0.5),shininess=0.5))),
        Transform(scale=(2.5,1.3,2),
          children=[
          Shape(
            geometry=Sphere(radius=0.2),
            appearance=Appearance(
              material=Material(diffuseColor=(0.5,0.5,0.5),shininess=0.5)))])]),
      TimeSensor(DEF='Clock',cycleInterval=10,loop=True),
      OrientationInterpolator(DEF='ScannerPath',key=[0.0,0.25,0.50,0.75,1.0],keyValue=[(0,1,0,0),(0,1,0,1.57),(0,1,0,3.14),(0,1,0,4.71),(0,1,0,6.18)]),
      Transform(translation=(0,-0.5,0),
        children=[
        Shape(DEF='Support',
          geometry=Cone(bottomRadius=0.5,height=1.2),
          appearance=Appearance(
            material=Material(diffuseColor=(0.5,0.5,0.5),shininess=0.5)))])]),
    ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='ScannerPath'),
    ROUTE(fromField='value_changed',fromNode='ScannerPath',toField='set_rotation',toNode='Scanner')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for RadarAirSearch.py")
