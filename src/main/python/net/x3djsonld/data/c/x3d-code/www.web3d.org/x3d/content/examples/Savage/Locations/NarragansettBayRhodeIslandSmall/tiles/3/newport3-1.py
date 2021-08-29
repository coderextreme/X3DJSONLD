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
    GeoLOD(center=(41.551080519985156,-71.38643844903493,0.0),range=4300.153,child1Url=['../../tiles/4/newport6-2.x3d'],child2Url=['../../tiles/4/newport6-3.x3d'],child3Url=['../../tiles/4/newport7-2.x3d'],child4Url=['../../tiles/4/newport7-3.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport3-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.53493880443013,-71.40258016458995,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=0.0016141715,zDimension=21,zSpacing=0.0016141715,height=[0,0,0,0,0,0,0,0,1,16,21,27,32,41,42,46,38,31,23,15,18,0,0,0,0,0,0,0,0,0,8,18,21,26,36,43,42,43,35,26,27,21,0,0,0,0,0,0,0,0,0,0,11,15,17,29,37,43,45,41,33,29,29,0,0,0,0,0,0,0,0,0,0,3,9,14,20,31,39,46,43,37,28,30,0,0,0,0,0,0,0,0,0,0,0,3,13,19,28,37,42,43,40,33,28,0,0,0,0,0,0,0,0,0,0,0,7,12,19,24,35,42,42,40,33,26,0,0,0,0,0,0,0,0,0,0,0,9,13,19,27,34,41,42,38,33,28,0,0,0,0,0,0,0,0,0,0,0,12,19,18,23,31,38,39,38,33,28,0,0,0,0,0,0,0,0,0,0,2,14,23,20,23,27,34,35,28,27,27,0,0,0,0,0,0,0,0,0,0,0,13,21,19,19,24,26,29,25,23,27,0,0,0,0,0,0,0,0,0,0,0,9,17,18,17,21,19,20,24,25,23,0,0,0,0,0,0,0,0,0,0,0,8,13,12,18,20,20,21,20,23,26,0,0,0,0,0,0,0,0,0,0,0,5,13,15,19,17,18,19,20,24,26,0,0,0,0,0,0,0,0,0,0,0,12,8,12,12,15,18,15,23,23,27,0,0,0,0,0,0,0,0,0,0,0,6,8,9,15,13,17,19,22,22,27,0,0,0,0,0,0,0,0,0,0,0,1,5,9,9,14,19,19,21,24,28,0,0,0,0,0,0,0,0,0,0,0,0,1,6,16,15,19,20,20,25,22,0,0,0,0,0,0,0,0,0,0,0,0,0,2,20,22,22,22,25,27,29,0,0,0,0,0,0,0,0,0,0,0,0,0,4,17,23,25,26,26,31,29,0,0,0,0,0,0,0,0,0,0,0,0,0,0,13,23,22,25,28,30,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,23,23,25,29,29,26],
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
