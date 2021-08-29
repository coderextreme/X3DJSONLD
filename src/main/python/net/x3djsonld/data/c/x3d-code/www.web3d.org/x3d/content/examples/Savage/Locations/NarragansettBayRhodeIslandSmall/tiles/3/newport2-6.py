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
    GeoLOD(center=(41.51879708887511,-71.2250212934847,0.0),range=4300.153,child1Url=['../../tiles/4/newport4-12.x3d'],child2Url=['../../tiles/4/newport4-13.x3d'],child3Url=['../../tiles/4/newport5-12.x3d'],child4Url=['../../tiles/4/newport5-13.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport2-6.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.50265537332009,-71.24116300903972,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=0.0014036275,zDimension=24,zSpacing=0.0014036275,height=[12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,14,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,9,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,14,16,10,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,22,14,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,24,17,12,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,26,20,17,13,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,27,23,20,17,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,25,25,23,21,17,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,20,23,24,22,22,23,16,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,21,22,22,20,21,24,24,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,21,23,19,17,17,21,29,20,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,21,16,13,13,18,25,28,15,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,21,17,13,13,13,15,20,27,22,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,17,14,13,13,13,15,17,23,17,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,20,14,13,12,13,18,16,17,15,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,22,17,12,11,14,18,15,10,7,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,21,16,11,13,15,10,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,23,19,12,6,9,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,25,19,12,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,25,18,13,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
