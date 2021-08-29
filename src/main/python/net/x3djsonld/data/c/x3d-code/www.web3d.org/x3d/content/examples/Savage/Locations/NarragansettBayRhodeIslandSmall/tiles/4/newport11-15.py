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
    GeoLOD(center=(41.62371823998276,-71.18466700459715,0.0),range=2150.0764,child1Url=['../../tiles/5/newport22-30.x3d'],child2Url=['../../tiles/5/newport22-31.x3d'],child3Url=['../../tiles/5/newport23-30.x3d'],child4Url=['../../tiles/5/newport23-31.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport11-15.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.615647382205246,-71.19273786237466,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=7.337143E-4,zDimension=24,zSpacing=7.018137E-4,height=[5,7,7,12,19,28,31,39,45,51,53,55,55,57,60,62,61,59,58,57,56,56,56,5,5,6,14,22,21,24,31,41,51,54,55,56,57,58,59,60,61,61,57,55,56,56,5,9,12,13,16,19,25,25,33,45,52,54,56,57,61,62,60,61,58,55,53,51,50,7,12,19,18,16,17,21,23,26,35,47,54,59,60,63,64,62,61,59,57,54,51,48,18,18,20,19,18,19,24,27,30,31,42,50,57,62,62,63,66,65,60,57,55,53,50,26,28,27,25,23,24,27,33,34,32,33,43,52,58,59,61,64,67,63,60,58,56,54,29,33,35,34,30,31,34,38,39,39,35,39,45,52,57,57,61,62,62,60,59,58,56,30,34,38,39,39,41,39,38,43,43,41,41,41,45,50,53,59,61,62,61,59,58,55,34,35,39,42,43,45,46,46,46,45,46,46,48,48,48,50,54,57,63,62,59,57,57,40,39,43,44,45,48,50,49,48,49,50,51,54,55,53,51,51,54,57,59,58,57,56,50,47,47,48,47,49,52,52,51,53,54,55,58,58,57,56,53,52,54,55,57,58,53,55,55,52,50,47,47,50,54,54,55,56,58,60,59,58,58,57,52,50,50,51,51,51,54,55,55,54,51,47,46,52,56,57,59,61,61,61,59,57,54,54,52,50,47,47,47,45,52,56,55,54,51,49,50,54,57,59,60,60,61,61,58,55,53,50,48,49,47,46,41,49,52,53,50,49,47,49,53,57,59,59,58,58,60,60,58,55,52,49,46,45,45,34,40,42,46,46,46,47,50,54,57,58,58,57,57,58,59,58,55,51,49,48,46,45,26,30,34,38,42,45,49,52,56,59,59,59,58,57,56,55,55,53,50,48,46,45,45,23,25,27,31,35,40,48,55,57,60,60,58,58,59,57,55,50,48,45,45,44,44,45,23,24,28,31,31,35,43,54,58,59,59,58,57,55,52,52,50,48,44,43,43,43,44,25,24,29,30,28,32,38,47,57,62,61,58,53,51,51,52,48,47,45,43,43,43,42,30,24,25,26,30,37,43,49,58,61,61,57,52,51,49,47,45,45,46,42,42,41,41,32,25,26,27,29,37,45,52,60,62,60,56,52,49,47,44,41,40,40,41,40,41,41,32,26,28,32,30,36,43,55,63,62,59,53,48,45,41,39,39,40,40,40,40,40,40,31,26,30,33,30,35,42,56,62,60,58,51,45,43,40,40,40,40,40,40,40,40,41],
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
