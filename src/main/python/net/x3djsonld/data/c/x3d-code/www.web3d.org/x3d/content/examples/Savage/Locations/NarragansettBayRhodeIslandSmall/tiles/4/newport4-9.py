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
    GeoLOD(center=(41.5107262310976,-71.28151729792728,0.0),range=2150.0764,child1Url=['../../tiles/5/newport8-18.x3d'],child2Url=['../../tiles/5/newport8-19.x3d'],child3Url=['../../tiles/5/newport9-18.x3d'],child4Url=['../../tiles/5/newport9-19.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport4-9.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.50265537332009,-71.28958815570479,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=23,zSpacing=7.337143E-4,height=[2,2,2,3,6,14,13,17,23,26,29,34,32,38,43,47,46,46,44,43,44,44,42,41,2,2,3,3,8,12,13,22,27,27,32,35,36,41,45,47,47,48,46,44,45,43,43,43,3,3,3,4,11,12,16,23,26,28,34,37,39,44,45,48,50,51,50,46,46,46,44,43,3,3,3,6,13,16,17,24,28,35,36,40,42,47,48,49,49,50,50,52,51,47,45,45,3,3,4,9,14,13,20,26,32,38,38,40,43,47,50,50,52,54,53,53,49,48,46,45,4,4,5,9,14,18,26,30,30,38,41,44,46,50,54,57,53,54,53,52,48,49,47,46,5,5,6,10,15,18,26,29,36,42,47,47,50,53,52,55,54,56,54,51,52,50,48,45,5,6,8,9,14,20,26,31,39,44,49,48,48,53,56,57,56,57,55,55,53,49,49,49,5,6,9,11,14,21,27,33,39,43,47,51,51,54,58,60,58,57,54,51,51,49,53,54,8,8,8,10,14,19,28,34,39,43,47,53,53,54,57,60,59,57,57,54,55,52,49,49,6,9,11,13,16,20,28,32,36,41,47,50,50,55,60,60,61,60,56,56,56,52,51,51,9,12,10,8,13,22,27,31,33,40,45,49,53,55,58,60,63,61,59,56,53,52,49,48,11,13,13,12,16,18,21,29,36,39,42,49,49,53,57,61,60,60,58,56,53,53,51,51,11,14,15,15,17,20,18,26,35,37,43,51,49,52,59,58,59,58,57,55,54,52,54,54,16,16,14,14,17,21,25,26,33,41,43,47,52,54,55,58,59,58,55,54,53,56,59,57,15,16,20,21,20,22,26,32,34,40,46,48,52,54,57,59,56,55,57,54,54,56,58,56,16,19,21,23,24,22,27,32,39,40,47,48,50,54,58,61,61,59,58,58,55,57,57,56,21,22,25,26,27,28,30,32,36,40,44,47,50,54,60,60,63,66,64,62,60,55,54,55,20,23,23,26,29,32,36,38,38,41,46,49,50,55,59,61,65,66,69,64,64,58,55,54,23,26,26,31,32,35,37,43,42,45,45,48,51,55,59,62,63,66,68,67,64,62,62,61,24,29,28,32,34,37,41,43,46,47,47,48,51,52,59,62,65,67,66,66,63,60,61,62,28,30,30,33,36,41,43,45,47,48,49,48,49,54,59,60,64,63,66,65,62,62,59,59,29,31,31,33,35,42,44,46,48,48,49,48,49,53,59,60,63,62,66,64,61,63,60,60],
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
