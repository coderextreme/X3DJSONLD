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
    GeoLOD(center=(41.52686794665262,-71.18466700459715,0.0),range=2150.0764,child1Url=['../../tiles/5/newport10-30.x3d'],child2Url=['../../tiles/5/newport10-31.x3d'],child3Url=['../../tiles/5/newport11-30.x3d'],child4Url=['../../tiles/5/newport11-31.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport5-15.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.51879708887511,-71.19273786237466,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=7.337143E-4,zDimension=24,zSpacing=7.018137E-4,height=[31,31,31,30,27,26,24,23,23,23,23,22,22,24,28,30,32,31,30,28,26,23,22,31,31,31,30,28,26,24,23,23,23,23,23,22,25,28,31,33,33,32,29,26,24,23,31,31,31,30,28,26,25,24,24,24,24,23,23,27,29,32,35,35,34,30,27,26,24,30,31,32,30,28,27,26,25,24,24,24,24,24,28,32,35,36,37,35,32,29,27,25,28,31,32,30,29,28,26,26,25,25,24,24,25,27,32,37,39,39,35,32,30,28,26,27,30,32,32,30,29,27,26,25,25,24,24,25,27,32,35,37,38,36,33,32,29,27,27,29,32,33,33,31,28,26,25,25,24,24,25,27,30,32,34,35,35,33,31,29,28,27,29,32,34,34,32,29,27,26,25,24,24,25,26,28,30,33,35,33,32,30,29,28,27,29,31,34,34,33,30,28,26,25,24,24,24,25,27,30,34,33,32,30,29,28,27,27,29,31,34,35,34,32,29,26,25,24,24,25,26,27,30,33,33,31,30,29,28,27,28,30,32,36,37,35,33,31,28,26,26,26,26,26,28,30,33,32,31,29,28,27,26,27,31,36,40,39,37,34,32,29,28,27,26,27,28,29,32,32,32,31,29,28,27,26,27,31,37,40,41,39,36,33,31,30,28,27,27,28,30,32,32,31,30,29,27,26,25,27,31,36,38,39,40,37,35,33,31,28,28,28,29,31,31,30,30,29,28,26,25,24,28,33,36,36,36,38,37,36,34,32,29,28,29,29,31,31,29,27,27,25,23,23,23,30,33,34,34,34,35,36,35,34,32,30,29,29,30,31,30,28,25,24,23,22,22,22,30,32,32,32,32,32,33,33,32,32,31,30,30,31,30,29,26,24,22,21,21,21,21,30,30,30,30,29,29,30,31,31,31,31,32,32,31,29,27,25,23,22,21,20,20,20,28,28,27,27,28,27,28,29,29,29,32,33,32,30,28,26,24,23,22,20,19,18,18,25,25,25,25,25,25,26,26,27,29,32,33,32,30,28,27,26,24,22,20,18,17,17,23,23,23,22,22,22,23,25,28,30,32,33,31,30,28,27,26,25,22,20,18,16,15,21,21,20,20,19,19,21,24,27,30,31,32,31,29,28,27,26,24,21,19,17,15,14,20,20,20,19,19,19,20,22,25,29,31,31,30,29,28,26,25,23,20,18,16,14,14,20,20,20,19,19,19,20,21,25,29,31,31,30,29,28,26,24,23,20,18,15,14,14],
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
