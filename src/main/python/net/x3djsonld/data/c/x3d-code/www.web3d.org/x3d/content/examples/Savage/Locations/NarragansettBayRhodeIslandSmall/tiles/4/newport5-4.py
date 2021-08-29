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
    GeoLOD(center=(41.52686794665262,-71.36222587570239,0.0),range=2150.0764,child1Url=['../../tiles/5/newport10-8.x3d'],child2Url=['../../tiles/5/newport10-9.x3d'],child3Url=['../../tiles/5/newport11-8.x3d'],child4Url=['../../tiles/5/newport11-9.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport5-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.51879708887511,-71.3702967334799,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=7.337143E-4,zDimension=24,zSpacing=7.018137E-4,height=[16,13,10,7,5,4,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,19,15,12,8,6,5,4,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,20,15,13,11,8,6,4,4,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,21,22,14,11,9,7,4,4,4,2,0,0,0,0,0,0,0,0,0,0,0,0,0,18,20,17,13,10,9,7,5,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,22,21,19,16,13,12,10,7,5,4,3,0,0,0,0,0,0,0,0,0,0,0,0,24,20,21,20,19,14,12,10,7,5,4,0,0,0,0,0,0,0,0,0,0,0,0,21,22,28,23,22,18,15,12,10,7,8,3,0,0,0,0,0,0,0,0,0,0,0,21,25,28,26,26,22,21,16,14,10,9,6,0,0,0,0,0,0,0,0,0,0,0,23,26,26,27,27,27,27,22,18,14,11,7,0,0,0,0,0,0,0,0,0,0,0,27,25,25,32,29,29,29,27,20,16,13,10,0,0,0,0,0,0,0,0,0,0,0,25,27,28,33,30,33,30,27,22,17,11,9,1,0,0,0,0,0,0,0,0,0,0,25,27,27,32,33,32,29,28,25,21,11,7,2,0,0,0,0,0,0,0,0,0,0,18,23,27,28,32,30,29,28,26,20,14,10,7,0,0,0,0,0,0,0,0,0,0,17,21,24,30,35,34,29,26,25,21,13,7,5,0,0,0,0,0,0,0,0,0,0,16,19,21,26,27,30,31,29,23,21,15,8,6,0,0,0,0,0,0,0,0,0,0,15,15,18,22,27,35,33,30,22,16,13,7,7,0,0,0,0,0,0,0,0,0,0,16,18,23,25,30,31,32,29,22,18,13,9,3,0,0,0,0,0,0,0,0,0,0,19,18,23,25,30,30,30,29,24,17,13,9,1,0,0,0,0,0,0,0,0,0,0,13,19,23,27,29,30,30,30,24,19,15,9,0,0,0,0,0,0,0,0,0,0,0,13,18,22,27,29,31,33,31,26,21,15,11,0,0,0,0,0,0,0,0,0,0,0,14,20,22,26,30,30,31,28,31,24,16,7,0,0,0,0,0,0,0,0,0,0,0,14,21,22,25,27,28,31,29,25,20,14,6,0,0,0,0,0,0,0,0,0,0,0,14,20,21,24,26,27,31,29,23,20,15,6,0,0,0,0,0,0,0,0,0,0,0],
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
