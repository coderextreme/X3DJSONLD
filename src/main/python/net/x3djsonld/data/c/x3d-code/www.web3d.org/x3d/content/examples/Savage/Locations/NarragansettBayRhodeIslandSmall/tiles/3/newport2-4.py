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
    GeoLOD(center=(41.51879708887511,-71.28958815570479,0.0),range=4300.153,child1Url=['../../tiles/4/newport4-8.x3d'],child2Url=['../../tiles/4/newport4-9.x3d'],child3Url=['../../tiles/4/newport5-8.x3d'],child4Url=['../../tiles/4/newport5-9.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport2-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.50265537332009,-71.30572987125981,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=0.0014036275,zDimension=24,zSpacing=0.0014036275,height=[25,26,25,23,21,25,21,26,24,15,5,2,2,9,16,25,32,37,42,43,40,44,42,41,28,29,29,29,28,29,29,32,30,19,3,3,3,11,23,27,35,40,47,49,45,44,43,41,28,30,33,38,36,36,37,40,33,23,6,3,7,15,25,37,40,47,49,50,53,47,43,41,27,29,37,41,46,43,41,38,35,26,8,4,9,17,30,38,45,50,57,54,52,49,46,46,29,30,36,42,45,47,44,40,30,17,4,7,10,19,31,43,49,53,57,57,56,50,49,46,27,33,37,44,50,49,42,32,19,11,6,8,11,19,33,43,53,54,61,58,53,52,48,48,30,34,38,46,49,48,40,22,11,10,7,13,10,21,30,39,49,55,60,61,55,52,49,50,35,37,43,45,46,44,33,18,10,7,9,15,15,20,25,37,50,52,58,57,55,52,51,51,39,40,42,44,44,39,27,16,9,10,12,16,21,22,32,40,49,55,59,55,54,58,53,52,39,37,43,44,40,33,23,12,12,13,18,21,26,30,34,41,48,54,61,66,62,55,56,54,33,34,38,40,36,31,23,14,14,16,25,26,32,36,42,45,48,54,63,66,67,61,58,57,24,32,34,36,32,25,18,19,16,26,27,31,33,42,46,48,48,53,60,62,64,63,59,58,20,28,31,31,32,29,21,19,20,26,31,28,36,44,47,51,51,51,55,63,62,63,61,60,22,28,32,30,27,27,24,19,23,27,30,36,43,46,49,52,50,52,54,57,61,59,62,62,22,28,35,34,29,30,22,20,21,27,34,39,43,46,55,50,52,52,55,59,58,61,65,65,25,32,34,32,29,30,22,19,21,26,35,42,47,50,51,50,49,52,54,55,76,61,60,61,27,34,34,32,28,23,23,22,23,26,36,41,49,53,52,52,47,50,54,62,59,58,48,51,33,37,33,30,29,25,27,27,26,30,37,42,48,50,51,50,48,49,54,57,55,61,63,59,30,31,33,36,35,29,28,29,31,34,36,40,47,49,49,45,47,49,50,53,54,58,61,61,28,30,30,31,33,29,30,32,35,37,37,41,44,46,45,44,44,47,53,54,53,54,52,54,30,26,27,28,26,31,32,35,36,39,39,40,41,42,45,46,46,46,49,52,52,59,59,55,31,24,23,24,31,35,36,41,46,40,39,38,38,37,44,49,55,48,53,53,55,54,57,57,28,24,22,26,35,43,41,42,44,47,42,39,35,40,44,47,53,55,56,54,55,60,54,57,29,24,22,28,35,41,42,42,46,46,43,39,37,40,43,45,54,54,56,54,56,59,54,55],
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
