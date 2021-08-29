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
    GeoLOD(center=(41.57529309331769,-71.28151729792728,0.0),range=2150.0764,child1Url=['../../tiles/5/newport16-18.x3d'],child2Url=['../../tiles/5/newport16-19.x3d'],child3Url=['../../tiles/5/newport17-18.x3d'],child4Url=['../../tiles/5/newport17-19.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport8-9.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.56722223554018,-71.28958815570479,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=23,zSpacing=7.337143E-4,height=[23,27,32,38,45,44,47,46,49,49,42,38,34,36,32,32,32,32,32,32,32,32,37,38,24,25,32,38,41,41,43,46,46,50,44,38,31,28,29,36,32,32,32,32,32,32,35,38,22,24,31,36,37,41,41,44,44,43,43,39,34,30,25,26,32,32,32,32,32,32,32,32,24,28,30,35,40,44,40,41,40,41,37,35,33,30,28,28,28,33,32,32,32,32,32,32,24,26,29,37,37,38,38,40,39,39,36,30,29,33,32,27,28,34,33,32,32,32,32,32,25,28,29,37,41,33,34,39,39,34,31,24,33,35,32,31,30,30,36,32,32,32,32,32,23,29,31,31,31,31,31,31,32,27,25,32,34,34,36,37,36,35,34,36,33,42,47,46,21,25,29,29,28,29,29,27,21,7,27,33,37,38,40,41,40,36,39,40,47,49,43,43,16,22,24,23,21,27,26,7,4,21,32,36,39,40,42,48,50,44,42,46,46,49,50,51,8,14,17,19,20,21,11,5,20,27,32,35,39,43,47,50,49,48,48,50,52,52,53,54,0,5,10,15,12,9,4,18,24,29,33,37,39,47,48,46,49,50,53,55,59,60,60,59,0,0,0,3,4,4,9,19,23,26,34,39,45,50,51,52,53,53,53,57,59,59,57,57,0,0,0,0,0,8,10,16,17,23,28,37,47,50,54,58,56,56,49,51,55,60,62,62,0,0,0,0,0,0,9,9,17,20,27,37,46,53,63,65,59,56,51,53,55,60,61,60,0,0,0,0,0,0,2,8,10,17,26,37,44,49,60,66,61,59,55,52,54,54,59,60,0,0,0,0,0,0,0,0,8,15,24,35,44,49,51,53,58,64,57,53,55,56,59,60,0,0,0,0,0,0,0,0,0,9,19,32,43,50,50,52,55,57,56,60,56,53,56,56,0,0,0,0,0,0,0,0,0,3,16,25,38,48,55,52,57,57,54,54,55,55,57,57,0,0,0,0,0,0,0,0,0,3,11,22,33,43,48,50,60,63,54,55,57,53,54,54,0,0,0,0,0,0,0,0,0,3,10,19,29,40,46,50,55,62,58,55,54,55,54,54,0,0,0,0,0,0,0,0,0,0,10,17,29,41,47,52,54,57,57,55,54,55,53,53,0,0,0,0,0,0,0,0,0,2,6,17,31,37,45,53,51,54,57,56,55,54,51,51,0,0,0,0,0,0,0,0,0,2,8,16,30,37,47,52,50,54,56,56,56,54,52,52],
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
