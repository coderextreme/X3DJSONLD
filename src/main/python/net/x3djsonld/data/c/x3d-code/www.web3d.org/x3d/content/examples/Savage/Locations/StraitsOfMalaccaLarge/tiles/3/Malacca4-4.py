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

newModel=X3D(profile='Immersive',version='3.1',
  head=head(
    children=[
    component(name='Geospatial',level=1)]),
  Scene=Scene(
    children=[
    GeoViewpoint(description='GeoViewpoint_3_44',geoSystem=['GDC'],position=(1.3545435942297035,101.90825043207244,224011.88563999312),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])),
    GeoLOD(center=(1.3545435942297035,101.90825043207244,0.0),range=268814.25,child1Url=['../../tiles/4/Malacca8-8.x3d'],child2Url=['../../tiles/4/Malacca8-9.x3d'],child3Url=['../../tiles/4/Malacca9-8.x3d'],child4Url=['../../tiles/4/Malacca9-9.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca4-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(0.3471685463819587,100.89750038406439,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.09626191,zDimension=22,zSpacing=0.09594048,height=[143,119,113,79,43,29,22,17,13,9,6,53,31,26,17,27,30,28,22,7,10,10,130,102,36,27,28,13,11,29,20,21,21,18,33,25,30,21,23,23,28,30,30,25,55,76,60,26,33,13,22,64,54,33,33,27,23,31,32,19,20,20,23,25,20,30,48,38,23,20,15,29,34,18,23,30,9,12,30,36,34,21,21,28,29,28,23,24,45,31,34,25,10,59,50,25,6,30,26,11,31,31,33,27,27,28,26,29,22,22,24,28,16,17,56,85,40,20,15,25,24,10,16,24,29,26,6,25,11,11,12,11,44,46,20,64,52,42,18,13,24,34,37,31,23,27,6,2,29,25,21,8,22,14,52,46,15,12,22,8,26,28,26,37,32,30,6,10,17,26,12,6,7,1,26,24,43,43,41,27,44,9,49,14,27,32,33,9,11,7,33,9,18,4,4,20,10,18,38,29,21,50,26,13,31,12,16,29,34,37,5,25,22,17,1,3,3,4,1,2,35,24,22,36,21,39,34,40,39,33,35,34,24,2,28,9,9,2,2,2,2,3,17,8,12,14,32,25,24,43,40,37,23,32,11,3,6,17,7,3,3,2,3,0,26,10,19,33,19,19,16,38,39,38,31,3,8,10,13,12,4,2,2,4,1,1,24,28,8,13,7,23,14,14,24,34,0,2,12,4,3,4,1,2,2,1,5,7,4,6,16,30,12,8,-18,3,2,-4,1,2,2,3,4,3,3,2,4,4,4,4,25,5,23,32,18,3,28,26,26,3,2,2,3,4,4,4,2,3,0,3,2,46,2,24,31,29,2,11,31,24,4,3,4,4,3,4,4,5,0,3,8,10,11,10,10,29,28,24,22,-6,6,8,3,3,3,4,4,4,5,4,6,11,36,16,14,151,28,30,30,25,2,0,-5,-19,4,4,4,4,6,3,3,4,0,12,50,15,226,201,22,23,17,1,-9,8,4,4,3,4,3,4,5,5,6,25,8,12,14,32,96,241,2,6,0,8,11,0,1,1,2,2,3,4,30,34,59,37,35,45,22,19,46,121,0,3,0,2,39,3,2,2,2,1,2,3,41,35,62,38,30,42,24,14,40,179],
            geoOrigin=GeoOrigin(USE='ORIGIN')))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful")
