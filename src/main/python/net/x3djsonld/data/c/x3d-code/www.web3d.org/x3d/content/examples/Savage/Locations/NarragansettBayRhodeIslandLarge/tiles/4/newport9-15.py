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
    GeoLOD(center=(41.573110194091946,-71.10967487145433,0.0),range=6150.5674,child1Url=['../../tiles/5/newport18-30.x3d'],child2Url=['../../tiles/5/newport18-31.x3d'],child3Url=['../../tiles/5/newport19-30.x3d'],child4Url=['../../tiles/5/newport19-31.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport9-15.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.54892011792395,-71.13166022549774,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[21,23,29,32,39,47,43,33,20,3,0,0,0,0,0,0,0,5,7,7,2,6,21,26,30,36,46,46,33,17,0,0,0,0,0,0,0,0,8,10,11,7,7,9,22,30,34,38,45,37,15,0,0,0,0,0,0,0,0,10,9,10,13,9,8,9,31,39,40,43,33,18,1,0,0,0,0,0,0,1,2,10,10,11,14,13,12,14,40,46,44,34,15,4,2,0,0,0,0,0,0,2,5,11,12,17,17,16,24,25,47,44,30,11,5,3,1,0,1,3,2,8,2,5,7,10,17,21,22,26,33,30,42,29,13,8,1,1,2,1,7,12,15,10,12,9,9,15,22,31,30,38,29,25,29,18,10,7,0,3,4,5,14,14,13,18,17,11,13,21,28,42,43,43,25,23,23,11,5,1,2,5,7,13,23,19,20,21,15,15,16,22,32,40,48,34,32,35,13,10,7,4,7,8,9,18,26,23,24,20,21,19,20,26,30,41,45,39,44,44,12,11,7,7,12,11,19,27,29,28,23,23,21,20,26,34,31,38,43,48,51,48,12,11,11,13,18,20,25,32,36,32,24,24,25,27,28,30,34,37,42,49,55,56,13,15,15,16,19,21,29,38,41,32,27,26,27,32,33,33,36,38,46,50,55,53,17,16,18,19,21,25,33,42,40,33,31,31,39,36,36,35,36,42,45,44,49,49,17,18,19,22,26,29,37,38,37,35,37,41,48,47,44,40,40,42,43,44,51,52,19,18,20,24,28,31,33,34,34,36,43,50,54,53,49,47,43,42,43,46,55,55,21,19,27,28,32,34,35,34,38,38,47,54,57,55,51,49,47,43,45,49,52,53,23,20,30,32,36,36,34,34,37,43,49,59,58,54,53,54,49,44,43,46,52,52,21,26,31,36,39,37,37,38,39,46,54,62,57,61,56,57,53,48,43,47,50,50,23,30,34,37,38,37,38,41,41,48,61,60,55,58,59,55,50,47,45,46,47,46,27,34,37,39,37,38,39,42,44,51,60,56,57,60,58,53,47,46,50,47,43,43,27,34,37,39,37,38,39,42,44,51,60,56,57,60,58,53,48,46,50,47,43,42],
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
