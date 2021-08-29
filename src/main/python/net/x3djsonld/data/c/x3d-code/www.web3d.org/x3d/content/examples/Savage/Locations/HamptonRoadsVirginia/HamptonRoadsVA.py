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
    component(level=1,name='Geospatial'),
    meta(content='HamptonRoadsVA.x3d',name='title'),
    meta(content='Scene created for the Trident Warrior 2009 Data Visualization Project.',name='description'),
    meta(content='Terry Norbraten',name='author'),
    meta(content='4 November 2009',name='created'),
    meta(content='9 July 2018',name='modified'),
    meta(content='../../license.html',name='license'),
    meta(content='Rez, http://planet-earth.org/Rez/RezIndex.html',name='generator'),
    meta(content='https://savage.nps.edu/Savage/Locations/HamptonRoadsVirginia/HamptonRoadsVA.x3d',name='identifier')]),
  Scene=Scene(
    children=[
    GeoLocation(geoCoords=(36.989999984839216,-76.99299996786561,0),
      children=[
      Transform(rotation=(0,0,0,2.815),
        children=[
        Background(skyColor=[(0.7,0.8,0.9)])]),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.989999984839216,-76.99299996786561,0.0)),
      #  Need some major illumination 
      PointLight(ambientIntensity=1,location=(0,100000,0),radius=1000000)]),
    Inline(url=["tiles/0/HamptonRoadsVA0-0.x3d","https://savage.nps.edu/Savage/Locations/HamptonRoadsVirginia/tiles/0/HamptonRoadsVA0-0.x3d","tiles/0/HamptonRoadsVA0-0.wrl","https://savage.nps.edu/Savage/Locations/HamptonRoadsVirginia/tiles/0/HamptonRoadsVA0-0.wrl"])]
    #  Inline url="/javaapis/auv/AuvwFOUO/ExerciseTelemetry/TridentWarrior2009/x3d/AMN_73_30JunTelemetry_2usv.x3d"/ 
    )
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for HamptonRoadsVA.py")
