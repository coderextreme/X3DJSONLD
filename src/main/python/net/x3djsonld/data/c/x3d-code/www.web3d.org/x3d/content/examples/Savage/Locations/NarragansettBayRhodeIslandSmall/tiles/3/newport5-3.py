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
    GeoLOD(center=(41.615647382205246,-71.32187158681484,0.0),range=4300.153,child1Url=['../../tiles/4/newport10-6.x3d'],child2Url=['../../tiles/4/newport10-7.x3d'],child3Url=['../../tiles/4/newport11-6.x3d'],child4Url=['../../tiles/4/newport11-7.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport5-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.599505666650224,-71.33801330236986,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=0.0016141715,zDimension=21,zSpacing=0.0016141715,height=[0,0,15,19,22,22,25,29,31,30,30,27,29,37,31,29,22,15,0,0,0,0,0,16,19,24,24,27,29,33,33,31,30,34,33,34,34,27,23,13,0,0,0,0,10,16,23,29,26,31,32,33,36,37,39,37,37,37,34,28,19,2,0,0,0,0,17,23,30,33,29,29,33,36,37,42,43,42,42,42,36,23,14,0,0,0,0,16,20,26,29,35,30,32,35,40,43,42,44,50,52,42,31,22,11,0,0,0,16,19,28,27,27,31,33,44,46,47,46,48,51,54,53,39,25,19,0,0,0,2,15,21,25,27,29,31,40,43,44,46,49,53,56,55,45,32,21,0,0,0,0,0,7,19,24,26,28,30,40,41,44,48,52,57,60,50,34,27,0,0,0,0,0,0,9,20,24,27,30,36,40,38,45,52,58,58,50,37,27,0,0,0,0,0,0,6,20,26,29,34,38,37,39,43,49,55,53,43,33,25,0,0,0,0,0,0,9,17,31,32,31,33,35,35,41,50,52,45,37,32,21,0,0,0,0,0,0,2,18,26,30,34,32,35,34,35,43,46,39,38,32,21,0,0,0,0,0,0,0,11,21,29,32,33,30,33,35,39,43,37,31,35,24,0,0,0,0,0,0,0,0,15,28,32,36,31,31,34,33,38,29,33,31,20,0,0,0,0,0,0,0,0,15,23,32,34,34,31,30,26,27,27,29,23,17,0,0,0,0,0,0,0,0,8,21,25,33,33,29,25,18,21,23,28,18,9,0,0,0,0,0,0,0,0,6,8,11,20,27,27,22,16,15,18,19,13,3,0,0,0,0,0,0,0,0,1,2,4,8,13,25,21,16,14,13,11,7,0,0,0,0,0,0,0,0,0,0,1,2,2,5,12,18,13,9,8,6,1,0,0,0,0,0,0,0,0,0,1,2,2,4,6,12,9,7,6,4,1,0,0,0,0,0,0,0,0,0,1,1,4,1,4,6,11,9,7,5,3,1,0,0],
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
