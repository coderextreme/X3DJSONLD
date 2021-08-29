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
    GeoLOD(center=(41.551080519985156,-71.2250212934847,0.0),range=4300.153,child1Url=['../../tiles/4/newport6-12.x3d'],child2Url=['../../tiles/4/newport6-13.x3d'],child3Url=['../../tiles/4/newport7-12.x3d'],child4Url=['../../tiles/4/newport7-13.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport3-6.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.53493880443013,-71.24116300903972,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=0.0014036275,zDimension=21,zSpacing=0.0016141715,height=[31,25,18,13,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,23,16,9,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,22,16,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,25,18,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,22,13,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,33,29,22,12,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,38,33,24,12,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,39,25,28,21,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,37,37,35,24,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,43,42,36,24,9,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,4,2,0,0,46,44,35,21,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,7,6,2,1,46,41,32,20,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,8,11,10,8,8,45,37,26,15,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,7,14,12,10,9,40,32,21,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,5,7,7,7,33,16,13,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,3,17,15,8,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,1,2,4,37,27,13,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,3,37,27,14,0,0,0,0,0,0,0,0,0,0,0,0,4,2,1,0,0,0,0,0,2,41,30,17,2,0,0,0,0,0,0,0,0,0,0,0,1,2,1,0,0,0,0,1,3,44,37,23,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,44,38,24,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2],
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
