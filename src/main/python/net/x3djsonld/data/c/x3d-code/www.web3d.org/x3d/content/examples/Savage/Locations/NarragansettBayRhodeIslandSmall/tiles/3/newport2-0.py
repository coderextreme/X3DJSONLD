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
    GeoLOD(center=(41.51879708887511,-71.41872188014497,0.0),range=4300.153,child1Url=['../../tiles/4/newport4-0.x3d'],child2Url=['../../tiles/4/newport4-1.x3d'],child3Url=['../../tiles/4/newport5-0.x3d'],child4Url=['../../tiles/4/newport5-1.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport2-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.50265537332009,-71.4348635957,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=0.0014036275,zDimension=24,zSpacing=0.0014036275,height=[40,38,36,34,33,32,32,30,16,10,1,0,0,0,0,0,0,0,0,0,0,0,11,12,41,40,38,38,35,37,38,30,28,17,0,0,0,0,0,0,0,0,0,0,0,0,12,14,45,43,44,40,42,40,38,36,33,21,13,0,0,0,0,0,0,0,0,0,0,0,6,8,52,48,47,44,45,44,42,38,37,26,16,2,0,0,0,0,0,0,0,0,0,0,0,1,54,49,46,48,41,41,40,41,36,27,22,12,0,0,0,0,0,0,0,0,0,0,0,0,49,51,47,47,40,38,37,39,37,31,21,10,0,0,0,0,0,0,0,0,0,0,0,0,49,50,49,48,40,37,39,38,35,33,22,12,1,0,0,0,0,0,0,0,0,0,0,0,46,48,45,45,46,39,39,36,39,35,29,16,7,0,0,0,0,0,0,0,0,0,0,0,43,42,44,43,45,44,43,41,41,35,29,18,7,11,0,0,0,0,0,0,0,0,0,0,39,44,41,47,47,49,48,45,46,39,36,23,11,4,0,0,0,0,0,0,0,0,0,0,40,42,45,44,46,46,51,50,51,48,38,29,20,9,0,0,0,0,0,0,0,0,0,0,38,38,44,44,48,50,52,54,54,49,43,33,19,12,0,0,0,0,0,0,0,0,0,0,37,41,47,50,50,55,57,59,57,53,41,33,23,14,1,0,0,0,0,0,0,0,0,0,42,48,48,51,53,57,63,62,58,51,45,38,23,16,0,0,0,0,0,0,0,0,0,0,47,50,51,51,54,58,63,63,65,55,43,33,23,18,0,0,0,0,0,0,0,0,0,0,45,50,49,51,61,61,66,65,64,58,42,31,25,13,0,0,0,0,0,0,0,0,0,0,46,48,48,49,57,61,66,65,58,56,43,32,24,3,0,0,0,0,0,0,0,0,0,0,47,46,46,48,48,57,61,59,53,49,41,28,20,0,0,0,0,0,0,0,0,0,0,0,38,42,45,43,52,59,58,59,52,46,37,28,13,0,0,0,0,0,0,0,0,0,0,0,39,41,42,45,52,56,54,55,53,40,35,25,6,0,0,0,0,0,0,0,0,0,0,0,30,40,45,51,51,47,55,51,48,37,26,14,3,2,0,0,0,0,0,0,0,0,0,0,27,39,43,48,49,53,52,52,42,32,13,7,0,0,0,0,0,0,0,0,0,0,0,0,30,37,40,46,43,49,45,42,31,21,10,3,0,0,0,0,0,0,0,0,0,0,0,0,31,38,39,46,43,48,44,41,30,19,8,3,0,0,0,0,0,0,0,0,0,0,0,0],
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
