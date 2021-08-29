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
    GeoLOD(center=(41.573110194091946,-71.19761628762797,0.0),range=6150.5674,child1Url=['../../tiles/5/newport18-26.x3d'],child2Url=['../../tiles/5/newport18-27.x3d'],child3Url=['../../tiles/5/newport19-26.x3d'],child4Url=['../../tiles/5/newport19-27.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport9-13.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.54892011792395,-71.21960164167137,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[0,0,0,0,0,0,0,0,26,30,26,26,24,23,18,17,20,17,15,14,14,14,0,0,0,0,0,0,0,0,14,21,28,29,28,27,20,14,14,14,14,14,14,14,0,0,0,0,0,0,0,0,1,9,25,33,39,30,19,14,14,14,14,14,14,14,0,0,0,0,0,0,0,0,1,2,12,31,35,28,14,14,18,19,14,14,14,16,0,0,0,0,1,1,0,0,0,0,7,25,28,22,11,11,40,31,20,14,15,16,0,0,0,2,6,1,0,0,1,1,0,10,14,13,5,16,31,34,26,24,21,20,0,0,0,4,10,8,4,8,11,6,0,2,6,7,7,21,28,32,32,28,24,24,0,0,0,2,12,10,10,16,18,12,2,0,1,4,13,27,31,30,26,27,28,27,0,0,0,0,2,2,11,20,20,13,5,1,1,3,17,28,23,19,21,25,27,28,0,0,0,0,2,0,11,14,10,9,6,1,1,5,15,25,19,16,17,22,29,29,0,2,1,0,0,0,9,11,10,10,6,1,1,1,15,19,17,17,19,22,28,27,0,3,1,0,0,0,9,9,10,10,6,1,1,0,9,11,15,17,20,22,26,28,0,0,0,0,0,0,4,9,12,13,5,1,1,1,1,6,11,11,14,20,25,28,0,0,0,0,0,0,4,10,13,16,12,1,1,1,0,6,15,8,11,16,20,21,0,0,0,0,0,0,1,10,17,23,18,1,1,1,1,1,4,5,12,20,24,23,0,0,0,0,0,0,0,7,6,11,12,12,4,2,5,8,7,6,8,15,21,22,0,0,0,0,0,0,0,6,5,3,3,6,5,1,8,11,7,8,11,15,21,20,0,0,0,0,0,0,0,4,1,1,0,1,1,1,7,8,8,11,14,18,18,21,0,0,0,0,0,0,0,2,1,1,1,0,7,10,13,10,9,19,24,23,22,20,0,0,0,0,0,0,0,0,0,1,1,0,7,15,18,11,11,21,28,27,32,28,0,0,0,0,0,0,1,1,1,1,1,1,15,20,14,10,15,26,31,34,31,38,0,0,0,0,0,0,1,1,1,1,1,1,15,20,14,10,15,28,31,35,31,42],
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
