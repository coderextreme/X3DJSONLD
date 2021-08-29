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
    GeoLOD(center=(41.6560016710928,-71.26537558237226,0.0),range=2150.0764,child1Url=['../../tiles/5/newport26-20.x3d'],child2Url=['../../tiles/5/newport26-21.x3d'],child3Url=['../../tiles/5/newport27-20.x3d'],child4Url=['../../tiles/5/newport27-21.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport13-10.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.64793081331529,-71.27344644014977,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=24,zSpacing=7.018137E-4,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,11,13,16,16,14,20,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,5,12,20,21,24,24,23,23,16,3,1,0,0,0,0,0,0,0,0,0,0,0,1,9,16,21,22,26,28,34,35,24,21,14,9,0,0,0,0,0,0,0,0,0,0,0,6,13,22,31,30,32,31,34,38,33,25,21,18,0,0,0,0,0,0,0,0,0,0,1,10,18,26,33,34,40,37,39,35,32,32,24,22,0,0,0,0,0,0,0,0,0,0,9,15,22,27,34,40,42,41,42,39,31,30,29,27,0,0,0,0,0,0,0,0,0,5,13,21,27,32,34,38,39,41,41,38,35,32,30,30,0,0,0,0,0,0,0,0,0,10,14,19,29,35,33,39,40,43,39,36,34,32,29,28,0,0,0,0,0,0,0,0,3,11,18,24,28,31,33,34,38,41,37,35,34,31,26,26,0,0,0,0,0,0,0,0,4,10,17,25,28,31,32,32,35,37,35,32,29,26,23,21,0,0,0,0,0,0,0,0,4,9,18,21,24,30,30,32,34,31,30,30,32,23,20,19,0,0,0,0,0,0,0,1,7,9,16,21,24,27,27,27,28,28,27,26,25,22,20,19,0,0,0,0,0,0,0,1,5,10,14,15,19,23,23,27,28,25,25,25,23,20,16,15,0,0,0,0,0,0,0,1,4,6,8,15,16,17,22,24,25,25,22,22,24,21,16,16,0,0,0,0,0,0,0,1,4,3,6,11,15,18,21,24,23,23,21,20,20,21,15,15,0,0,0,0,0,0,0,0,4,7,5,8,14,19,22,21,20,20,26,23,20,18,14,13,0,0,0,0,0,0,0,0,0,6,8,8,13,16,17,16,18,23,24,21,18,16,13,13,0,0,0,0,0,0,0,0,0,0,4,7,10,14,17,18,20,22,21,21,17,14,12,13,0,0,0,0,0,0,0,0,0,0,2,6,9,15,16,17,19,21,19,20,16,14,14,13,0,0,0,0,0,0,0,0,0,0,1,9,13,10,12,15,15,20,17,17,17,15,12,12,0,0,0,0,0,0,0,0,0,0,1,4,9,9,12,15,15,13,14,15,17,15,15,12,0,0,0,0,0,0,0,0,0,0,0,3,3,7,13,13,15,15,16,15,16,18,17,16,0,0,0,0,0,0,0,0,0,0,0,3,4,6,6,13,15,14,16,14,17,18,16,15,0,0,0,0,0,0,0,0,0,0,0,3,5,7,7,11,15,14,15,15,17,20,16,16],
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
