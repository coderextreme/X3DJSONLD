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
    GeoLOD(center=(41.59730027025994,-71.35151376593183,0.0),range=24602.27,child1Url=['../../tiles/3/newport4-4.x3d'],child2Url=['../../tiles/3/newport4-5.x3d'],child3Url=['../../tiles/3/newport5-4.x3d'],child4Url=['../../tiles/3/newport5-5.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/newport2-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.500539965587954,-71.43945518210546,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.008375373,zDimension=22,zSpacing=0.009215267,height=[24,28,14,0,0,0,0,13,11,0,0,0,0,0,3,13,6,0,9,40,11,14,30,43,28,0,0,0,0,0,13,16,0,0,0,0,6,17,43,17,40,47,35,43,31,47,45,0,0,0,16,17,9,0,0,0,0,0,7,28,42,15,45,57,38,53,32,48,56,0,0,0,24,26,27,0,0,0,0,0,0,12,29,30,50,55,47,62,16,42,24,0,0,0,15,44,19,0,0,16,0,0,0,37,30,47,52,60,70,67,12,13,0,0,0,0,0,31,29,0,0,0,0,0,0,0,41,50,60,53,82,87,9,8,0,0,0,0,0,18,25,19,0,0,0,0,0,0,26,36,55,48,55,70,9,0,0,0,0,0,0,22,29,0,0,0,0,0,0,0,0,20,49,51,74,78,0,0,0,0,0,0,0,0,13,0,0,0,0,0,0,0,0,0,32,58,56,69,0,0,0,0,0,0,0,0,0,0,0,0,0,8,0,0,0,0,5,48,63,75,13,11,8,9,8,0,0,0,0,0,0,0,8,31,25,0,0,0,0,30,53,63,12,15,13,9,6,0,0,0,4,0,0,0,0,30,42,28,0,0,0,21,47,36,13,12,12,3,0,0,0,0,0,0,0,0,0,18,36,49,0,0,0,0,17,19,14,16,10,0,0,0,0,0,0,0,0,0,0,0,35,27,0,0,0,0,11,7,25,13,14,10,0,0,0,0,0,0,0,0,0,5,2,0,0,0,0,0,0,1,28,18,16,9,0,0,0,0,0,0,0,13,0,0,0,0,0,0,1,0,0,0,5,13,16,17,0,0,0,0,0,0,1,13,0,0,0,0,0,0,0,0,22,40,21,14,14,5,0,0,0,0,0,15,0,8,0,0,0,0,21,0,0,0,8,15,0,6,6,0,0,0,0,12,0,0,0,0,0,0,0,0,16,15,0,7,7,13,0,0,0,0,0,0,19,28,2,0,0,0,0,0,0,0,7,4,0,4,31,33,0,4,3,8,0,5,5,46,2,0,0,0,0,0,0,0,0,3,12,8,29,37,1,5,3,8,0,5,5,46,3,0,0,0,0,0,0,0,0,3,13,9,28,36],
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
