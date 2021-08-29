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
    GeoLOD(center=(41.551080519985156,-71.35415501792488,0.0),range=4300.153,child1Url=['../../tiles/4/newport6-4.x3d'],child2Url=['../../tiles/4/newport6-5.x3d'],child3Url=['../../tiles/4/newport7-4.x3d'],child4Url=['../../tiles/4/newport7-5.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport3-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.53493880443013,-71.3702967334799,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=0.0014036275,zDimension=21,zSpacing=0.0016141715,height=[18,23,26,31,21,11,0,0,0,0,0,0,0,0,0,0,0,6,18,7,0,0,0,0,21,25,26,19,18,2,0,0,0,0,0,0,0,0,0,0,0,13,17,0,0,0,0,0,29,26,23,17,8,0,0,0,0,0,0,0,0,0,0,0,0,5,9,0,0,0,0,0,30,24,22,15,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,19,16,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,19,12,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,19,14,11,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,25,18,17,16,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,26,28,22,20,16,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,25,27,24,26,24,15,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,26,25,30,30,25,16,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,26,27,29,29,28,19,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,29,32,32,30,25,21,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,29,34,34,32,25,18,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,31,31,33,33,30,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,29,27,31,30,26,16,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,22,22,23,27,27,23,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,26,27,26,24,17,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,29,26,27,18,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,28,25,16,15,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,24,15,15,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
