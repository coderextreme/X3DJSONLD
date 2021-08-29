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
    GeoLOD(center=(41.5107262310976,-71.42679273792248,0.0),range=2150.0764,child1Url=['../../tiles/5/newport8-0.x3d'],child2Url=['../../tiles/5/newport8-1.x3d'],child3Url=['../../tiles/5/newport9-0.x3d'],child4Url=['../../tiles/5/newport9-1.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport4-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.50265537332009,-71.4348635957,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=7.337143E-4,zDimension=23,zSpacing=7.337143E-4,height=[40,41,41,39,38,36,34,33,33,32,32,33,32,34,33,27,21,18,14,0,0,0,0,41,41,41,38,37,37,38,37,34,36,38,37,36,32,29,29,27,22,15,6,0,0,0,43,42,41,40,41,39,39,39,38,37,37,37,41,37,34,32,27,23,17,15,5,0,0,45,43,42,42,44,43,39,42,42,41,40,40,38,37,35,32,31,26,21,19,11,0,0,48,46,45,44,45,45,41,42,42,40,43,42,40,39,39,38,34,29,24,20,16,4,0,51,50,46,46,46,44,45,46,46,44,44,42,41,40,38,37,36,30,26,21,16,11,0,54,49,50,48,47,46,45,45,43,45,43,41,40,41,40,39,34,31,29,24,17,15,9,54,49,48,49,44,47,48,44,43,42,42,44,41,42,42,38,35,33,27,23,20,15,11,50,51,50,50,48,48,47,45,41,38,40,39,39,40,39,40,35,32,28,25,23,15,11,50,50,51,50,48,47,46,48,41,40,38,38,38,40,40,38,36,33,31,25,20,17,11,49,49,49,49,46,45,46,43,41,39,40,40,37,37,38,39,39,34,31,28,21,16,11,50,52,51,49,49,49,48,42,41,38,36,37,39,39,38,37,37,39,31,26,22,17,11,45,45,47,48,51,48,42,42,43,43,40,41,39,40,36,36,36,41,38,29,21,17,15,46,48,48,46,46,47,44,43,45,42,38,38,39,39,36,37,38,39,37,32,27,20,15,44,46,44,46,45,46,45,44,48,46,44,39,37,36,36,38,37,36,34,35,30,23,17,44,46,42,44,44,45,44,45,44,43,43,40,41,40,39,41,42,37,37,35,28,22,18,42,44,45,44,45,43,43,45,45,46,45,47,45,41,46,41,39,37,35,33,33,24,22,39,41,45,42,40,43,45,47,46,49,49,46,47,44,45,45,46,37,38,37,35,29,23,37,40,44,44,44,45,48,46,46,46,48,49,47,48,47,47,47,44,41,37,35,30,26,40,37,44,44,44,44,44,43,45,46,46,48,50,49,50,50,50,50,48,43,38,33,28,39,37,37,43,42,43,42,46,48,49,49,49,50,52,52,53,50,51,49,43,40,33,30,36,37,39,43,45,44,44,46,47,50,51,51,51,55,53,53,54,54,49,45,43,36,31,38,38,38,44,44,43,44,46,48,51,50,51,52,56,54,53,54,55,49,45,43,36,33],
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
