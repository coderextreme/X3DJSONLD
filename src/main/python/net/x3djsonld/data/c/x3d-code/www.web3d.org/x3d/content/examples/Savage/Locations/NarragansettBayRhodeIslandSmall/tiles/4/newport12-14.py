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
    GeoLOD(center=(41.63985995553778,-71.20080872015217,0.0),range=2150.0764,child1Url=['../../tiles/5/newport24-28.x3d'],child2Url=['../../tiles/5/newport24-29.x3d'],child3Url=['../../tiles/5/newport25-28.x3d'],child4Url=['../../tiles/5/newport25-29.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport12-14.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.63178909776027,-71.20887957792968,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=23,zSpacing=7.337143E-4,height=[8,15,22,26,32,39,47,52,44,35,31,31,29,24,24,28,30,31,34,32,32,31,32,31,7,14,21,26,33,39,44,49,46,38,32,32,30,26,25,28,30,30,31,32,32,32,32,31,5,12,20,27,33,38,41,46,47,38,35,34,32,27,28,30,30,31,31,31,31,31,31,31,4,11,18,25,33,37,40,42,43,40,41,38,35,30,31,31,31,31,32,32,32,30,29,29,2,9,16,26,33,38,39,40,41,44,44,41,36,35,37,35,33,32,32,32,33,31,29,29,3,9,16,26,34,38,39,40,41,46,47,45,42,40,40,39,38,34,32,33,32,30,33,34,4,9,18,26,34,39,39,40,42,48,51,47,44,45,44,44,42,34,32,34,32,32,40,41,2,10,18,26,35,39,40,41,44,51,53,48,47,49,47,45,41,36,38,38,33,37,45,46,3,10,18,24,35,38,41,43,46,51,53,47,50,50,45,40,39,42,46,42,38,46,53,54,4,10,20,23,31,36,41,44,47,52,48,44,46,47,47,42,43,47,49,42,45,55,57,56,5,10,17,24,30,34,37,41,45,46,43,43,43,45,47,45,47,53,48,46,56,58,56,56,4,10,16,23,28,31,35,39,42,43,43,43,43,46,47,49,58,62,51,58,67,61,58,58,3,10,16,22,26,29,33,37,41,43,43,43,46,48,50,56,64,64,58,67,65,61,56,56,1,7,15,21,26,29,34,37,40,42,44,47,52,54,55,57,60,60,67,66,65,61,58,57,1,8,15,19,24,29,35,38,40,42,46,51,59,64,64,58,58,67,69,67,68,65,60,59,2,8,14,20,25,29,34,38,40,42,48,58,64,69,69,59,57,71,68,67,67,66,61,59,1,5,11,16,23,28,34,37,40,42,51,61,68,69,71,58,63,69,68,67,65,63,60,59,1,3,6,14,22,28,33,38,38,40,44,61,67,63,60,55,73,73,71,68,66,63,60,59,1,4,5,11,23,28,34,37,40,41,41,44,55,54,50,57,72,77,76,71,66,63,61,61,1,3,6,11,22,28,34,37,40,42,44,48,45,46,48,53,62,74,77,74,68,62,62,62,1,1,7,9,20,26,32,36,38,41,43,47,46,48,53,59,64,69,64,64,66,62,62,62,1,1,7,8,19,25,30,34,37,40,42,45,48,49,52,57,65,69,71,75,69,63,64,65,1,1,7,8,19,25,30,33,37,39,42,46,48,49,51,56,65,69,71,73,68,64,65,66],
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
