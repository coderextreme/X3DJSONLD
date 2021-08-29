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
    GeoLOD(center=(41.53493880443013,-71.20887957792968,0.0),range=8600.306,child1Url=['../../tiles/3/newport2-6.x3d'],child2Url=['../../tiles/3/newport2-7.x3d'],child3Url=['../../tiles/3/newport3-6.x3d'],child4Url=['../../tiles/3/newport3-7.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/newport1-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.50265537332009,-71.24116300903972,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0030746125,zDimension=23,zSpacing=0.0029348573,height=[11,0,0,0,0,0,0,0,0,0,0,0,8,12,13,15,16,17,19,22,15,17,1,0,0,0,0,0,0,0,0,0,0,0,3,15,15,17,19,20,26,22,17,22,11,4,0,0,0,0,0,0,0,0,0,0,0,7,15,25,23,23,25,21,17,20,28,13,0,0,0,0,0,0,0,0,0,0,0,3,15,29,27,24,22,19,19,19,30,20,12,0,0,0,0,0,0,0,0,0,0,0,13,30,28,22,21,25,19,18,22,23,22,2,0,0,0,0,0,0,0,0,0,1,14,30,28,24,23,35,25,22,22,17,20,24,0,0,0,0,0,0,0,0,0,1,17,26,33,25,25,35,29,26,20,13,14,26,3,0,0,0,0,0,0,0,1,2,12,27,37,28,26,33,28,25,18,13,16,15,10,0,0,0,0,0,0,2,13,16,14,26,36,34,29,28,23,24,25,15,14,3,1,0,0,0,0,0,0,5,25,25,19,26,26,28,32,25,17,16,29,15,0,0,0,0,0,0,0,0,0,0,24,30,22,20,19,24,30,23,13,14,24,13,0,0,0,0,0,0,0,0,0,0,25,28,26,24,21,17,18,17,14,14,25,9,0,0,0,0,0,0,0,0,0,0,6,22,30,32,24,14,14,14,14,14,35,20,0,0,0,0,0,0,0,0,0,0,2,6,29,38,23,14,14,14,14,16,34,31,0,0,0,0,0,0,0,0,0,0,0,1,23,28,17,12,38,21,14,17,45,30,1,0,0,0,0,0,0,6,2,1,2,0,6,12,6,17,34,27,23,21,44,22,1,0,0,0,0,0,0,12,10,9,16,6,0,1,7,25,29,31,31,24,28,12,0,0,0,0,0,0,0,1,3,17,23,11,0,1,11,29,22,20,27,29,26,6,0,0,0,0,0,0,0,1,1,13,10,12,0,1,10,24,17,16,24,30,34,3,0,0,0,0,0,6,1,0,0,11,9,10,0,1,8,15,17,19,25,28,42,17,0,0,0,0,0,0,0,0,0,7,11,12,1,1,1,7,14,13,22,30,46,29,0,0,0,0,0,0,0,0,0,7,13,15,1,1,1,6,10,10,17,22,47,29,0,0,0,0,0,0,0,0,0,7,13,16,1,1,1,6,10,10,17,22],
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
