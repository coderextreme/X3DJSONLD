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
    GeoLOD(center=(41.607576524427735,-71.18466700459715,0.0),range=2150.0764,child1Url=['../../tiles/5/newport20-30.x3d'],child2Url=['../../tiles/5/newport20-31.x3d'],child3Url=['../../tiles/5/newport21-30.x3d'],child4Url=['../../tiles/5/newport21-31.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport10-15.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.599505666650224,-71.19273786237466,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=7.337143E-4,zDimension=24,zSpacing=7.018137E-4,height=[7,9,10,10,9,8,8,11,17,23,31,40,42,45,46,46,43,41,38,37,35,35,38,7,9,9,9,8,7,7,11,17,25,33,39,45,47,47,46,42,41,41,40,40,43,42,6,8,8,8,7,7,6,10,17,26,37,44,50,48,49,46,42,41,41,41,46,48,52,6,6,7,7,7,7,7,9,15,26,38,45,48,50,55,50,45,43,43,43,46,45,49,8,8,7,6,7,7,6,9,16,25,36,42,46,49,49,48,48,46,46,45,43,45,49,8,8,7,7,7,7,6,8,15,23,34,43,46,46,44,44,48,50,49,44,44,44,43,8,9,7,6,7,7,6,7,12,23,38,49,47,44,43,43,46,50,45,45,45,44,45,9,10,9,8,7,7,8,7,10,26,38,47,46,44,44,45,46,46,45,46,46,45,46,7,10,10,11,9,7,7,8,9,25,38,45,44,44,44,46,48,49,47,45,44,45,48,6,8,9,12,9,6,7,7,19,28,36,40,42,44,43,44,46,45,46,47,46,46,46,4,6,9,13,9,6,6,8,22,27,30,34,38,41,43,44,46,44,43,43,45,48,46,3,5,10,13,9,7,7,8,14,22,27,32,36,39,42,42,42,41,40,41,42,44,48,2,7,15,13,10,6,6,8,12,20,26,33,37,39,41,40,40,40,41,41,41,42,43,3,14,16,12,9,7,6,9,13,21,29,36,39,41,43,44,42,42,41,41,41,44,44,3,8,14,13,11,7,8,12,16,23,34,39,42,44,46,51,46,45,44,42,43,45,44,3,6,11,14,12,8,10,14,19,26,33,40,45,49,50,47,48,50,48,46,47,48,46,2,5,9,13,12,11,12,16,20,27,34,42,46,48,49,50,51,49,47,48,50,50,47,2,5,10,13,14,14,14,18,26,32,33,38,45,47,48,49,50,51,51,53,47,43,42,2,12,16,11,10,12,18,25,32,38,35,38,45,48,49,50,51,52,51,50,48,44,42,6,8,12,11,11,15,22,30,38,41,42,41,45,49,52,55,57,56,52,50,49,48,46,9,11,10,10,12,19,27,40,46,45,48,50,50,52,54,56,58,57,55,55,54,51,47,8,10,8,9,17,33,35,46,46,48,52,54,53,56,58,58,57,56,58,60,56,53,52,6,8,7,11,20,30,33,41,45,50,53,56,55,57,61,63,60,58,58,57,56,56,55,5,7,7,12,19,28,31,39,45,51,53,55,55,57,60,62,61,59,58,57,56,56,56],
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
