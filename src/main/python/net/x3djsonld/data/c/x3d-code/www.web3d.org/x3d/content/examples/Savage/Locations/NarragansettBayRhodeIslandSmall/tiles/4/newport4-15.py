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
    GeoLOD(center=(41.5107262310976,-71.18466700459715,0.0),range=2150.0764,child1Url=['../../tiles/5/newport8-30.x3d'],child2Url=['../../tiles/5/newport8-31.x3d'],child3Url=['../../tiles/5/newport9-30.x3d'],child4Url=['../../tiles/5/newport9-31.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport4-15.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.50265537332009,-71.19273786237466,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=7.337143E-4,zDimension=23,zSpacing=7.337143E-4,height=[14,15,16,16,16,16,16,16,17,17,17,18,19,20,21,22,22,21,20,18,16,14,14,15,15,16,16,16,16,16,17,17,17,17,18,19,20,21,22,22,21,21,19,17,15,14,15,16,16,16,16,16,16,17,17,17,18,18,19,20,22,23,23,23,21,19,17,15,15,16,17,17,17,17,17,17,17,17,18,19,20,20,21,22,24,24,23,20,18,17,16,16,17,18,18,18,18,17,17,17,18,19,21,22,22,23,24,24,24,22,20,18,17,16,16,17,18,19,19,18,17,18,18,19,20,22,24,25,25,25,25,24,22,20,19,17,17,16,18,19,19,20,19,19,19,19,20,22,24,26,27,26,25,24,23,22,21,20,18,17,17,19,20,21,21,20,20,20,20,20,22,24,27,29,27,25,24,22,21,20,19,18,17,17,20,21,21,21,21,20,21,21,21,22,24,27,29,28,25,23,21,20,19,19,18,17,18,22,22,22,22,22,22,22,22,23,23,25,27,26,26,25,23,21,20,19,18,18,17,17,25,24,24,23,23,23,23,23,23,24,26,26,25,25,25,23,21,20,20,19,18,17,18,27,26,25,23,23,24,24,24,24,25,25,25,25,24,23,22,21,21,20,19,19,18,18,28,28,27,25,25,25,25,25,24,24,23,23,24,23,22,21,20,20,20,20,19,18,18,29,29,28,27,26,25,25,25,24,24,23,22,23,22,21,20,20,19,19,20,19,18,18,29,29,30,29,26,25,25,25,24,24,23,22,22,21,20,20,19,19,19,20,19,19,18,30,31,31,28,26,24,23,23,24,24,23,23,22,21,20,19,19,19,20,20,20,19,18,30,31,30,28,27,24,22,23,24,24,23,22,21,20,20,20,20,20,21,20,20,19,18,30,31,30,29,27,25,23,23,23,23,22,22,21,20,20,21,21,22,22,21,20,18,18,31,31,30,30,28,25,24,23,22,22,22,21,21,21,22,23,24,23,23,22,21,18,18,31,31,30,30,27,25,24,23,23,22,21,21,21,22,24,26,27,26,26,24,21,19,18,31,31,31,30,27,25,24,23,23,22,22,22,22,23,26,28,29,29,28,25,23,21,20,31,31,31,30,27,25,24,23,23,23,22,22,22,24,27,30,31,31,29,27,25,23,21,31,31,31,30,27,26,24,23,23,23,23,22,22,24,28,30,32,31,30,28,26,23,22],
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
