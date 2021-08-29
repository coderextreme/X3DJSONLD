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
    GeoLOD(center=(41.607576524427735,-71.31380072903733,0.0),range=2150.0764,child1Url=['../../tiles/5/newport20-14.x3d'],child2Url=['../../tiles/5/newport20-15.x3d'],child3Url=['../../tiles/5/newport21-14.x3d'],child4Url=['../../tiles/5/newport21-15.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport10-7.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.599505666650224,-71.32187158681484,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=24,zSpacing=7.018137E-4,height=[29,28,28,28,30,29,28,33,36,33,34,33,34,29,27,22,18,13,12,2,0,0,0,0,30,28,31,29,30,32,33,34,36,37,33,35,34,32,27,23,19,18,16,10,1,0,0,0,32,31,29,34,33,33,32,35,33,35,36,36,35,35,31,28,24,23,17,16,7,0,0,0,32,32,33,35,35,35,35,38,37,39,38,38,37,36,33,31,27,24,19,18,11,8,0,0,35,35,38,37,36,40,38,40,38,37,38,39,38,38,37,33,33,27,22,18,13,4,0,0,35,35,37,39,40,38,40,39,39,39,41,38,41,40,40,37,32,29,24,22,17,11,1,0,34,36,36,37,37,41,42,43,43,44,42,40,41,43,43,39,37,35,28,23,21,15,6,4,34,35,37,40,38,38,40,39,41,40,44,45,46,47,48,44,43,37,34,26,24,18,11,10,34,35,38,39,41,44,43,41,43,43,44,45,48,48,49,50,44,41,40,31,26,22,19,17,40,38,40,40,44,44,43,43,45,45,47,47,52,53,52,56,50,45,40,30,27,20,21,20,42,44,41,41,44,44,47,45,45,46,48,47,52,53,56,57,54,49,41,37,28,26,20,20,35,41,45,47,47,44,48,47,50,49,49,49,50,55,53,55,55,53,46,39,37,29,26,25,36,41,41,43,45,47,46,47,49,48,48,50,52,55,58,58,55,53,49,45,37,32,24,22,33,38,44,41,44,46,47,45,47,47,48,50,52,55,56,58,59,55,51,46,36,32,30,28,29,35,39,39,39,42,48,47,51,47,48,50,51,54,56,56,61,56,52,48,40,31,26,26,27,30,35,39,40,42,41,43,44,45,48,51,51,55,57,58,61,60,54,50,40,35,31,31,26,31,34,37,40,38,40,44,43,46,48,47,49,55,56,58,60,59,53,49,40,38,34,33,30,30,37,36,39,40,42,39,38,41,43,48,52,56,56,58,58,60,57,49,41,38,30,29,29,32,34,36,36,37,36,37,40,44,48,48,49,51,56,57,54,56,54,49,43,34,31,30,30,32,31,35,37,37,36,41,36,41,44,46,49,54,55,55,54,55,49,46,41,35,30,30,31,32,32,35,35,37,37,38,39,41,44,44,49,53,54,56,52,48,43,41,37,32,27,27,34,31,31,31,33,35,35,37,38,39,42,41,47,51,54,56,51,44,40,38,35,33,30,28,31,32,33,34,32,33,38,36,34,36,41,43,47,50,49,49,48,43,38,37,35,33,29,28,32,33,33,34,34,34,36,35,34,37,39,41,45,49,48,48,50,42,37,38,37,34,29,28],
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
