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
    GeoLOD(center=(41.51879708887511,-71.38643844903493,0.0),range=4300.153,child1Url=['../../tiles/4/newport4-2.x3d'],child2Url=['../../tiles/4/newport4-3.x3d'],child3Url=['../../tiles/4/newport5-2.x3d'],child4Url=['../../tiles/4/newport5-3.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport2-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.50265537332009,-71.40258016458995,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=0.0016141715,zDimension=24,zSpacing=0.0014036275,height=[12,14,2,1,0,0,0,0,0,0,0,0,4,17,22,22,21,19,21,21,20,14,23,22,4,0,0,0,0,0,0,0,0,0,10,17,18,15,16,16,18,19,8,21,27,19,0,0,0,0,0,0,0,0,0,0,5,9,8,7,10,12,20,1,14,17,19,0,0,0,0,0,0,0,0,0,0,0,1,2,4,7,7,13,0,2,2,0,0,0,0,0,0,0,0,0,0,0,1,6,2,2,3,5,4,0,0,0,0,0,0,0,0,0,0,0,0,0,5,10,10,8,5,3,3,3,0,0,0,0,0,0,0,0,0,0,0,0,3,9,11,13,12,9,4,3,2,0,0,0,0,0,0,0,0,0,0,0,3,5,9,13,17,11,9,6,3,2,0,0,0,0,0,0,0,0,0,0,9,6,11,10,11,11,17,16,11,11,2,0,0,0,0,0,0,0,0,4,13,11,18,14,15,14,11,19,27,18,13,8,0,0,0,0,0,0,0,4,13,20,22,23,20,15,19,17,24,26,26,21,12,0,0,0,0,0,0,0,7,20,25,26,32,31,20,17,19,21,24,31,24,13,0,0,0,0,0,0,0,17,20,22,37,36,36,30,20,19,19,22,24,22,18,0,0,0,0,0,0,0,19,21,27,33,39,45,38,26,19,16,17,19,24,19,0,0,0,0,0,0,0,15,19,29,34,43,45,40,29,21,17,16,14,20,23,0,0,0,0,0,0,0,16,20,26,31,36,40,44,34,22,15,12,14,20,22,0,0,0,0,0,0,0,14,21,24,28,31,35,43,33,23,16,10,16,20,27,0,0,0,0,0,0,0,10,19,22,24,27,33,39,36,26,15,12,14,18,26,0,0,0,0,0,0,0,4,15,23,28,26,32,37,36,28,22,16,10,12,19,0,0,0,0,0,0,0,0,13,19,26,28,31,36,39,31,23,16,11,17,15,0,0,0,0,0,0,0,0,10,20,26,27,34,37,38,36,26,20,15,14,16,0,0,0,0,0,0,0,0,5,17,24,26,37,38,42,41,31,23,19,14,15,0,0,0,0,0,0,0,0,1,15,22,27,32,41,43,45,37,31,21,13,18,0,0,0,0,0,0,0,0,1,16,21,27,32,41,42,46,38,31,23,15,18],
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
