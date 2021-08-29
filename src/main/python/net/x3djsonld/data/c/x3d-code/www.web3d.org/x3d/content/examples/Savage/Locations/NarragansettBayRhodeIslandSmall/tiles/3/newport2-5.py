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
    GeoLOD(center=(41.51879708887511,-71.25730472459475,0.0),range=4300.153,child1Url=['../../tiles/4/newport4-10.x3d'],child2Url=['../../tiles/4/newport4-11.x3d'],child3Url=['../../tiles/4/newport5-10.x3d'],child4Url=['../../tiles/4/newport5-11.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport2-5.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.50265537332009,-71.27344644014977,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=0.0016141715,zDimension=24,zSpacing=0.0014036275,height=[41,34,27,24,21,26,32,38,34,32,18,11,14,17,25,25,29,29,31,25,12,41,35,31,25,26,26,36,42,45,35,23,16,15,17,20,26,28,32,34,23,14,41,40,33,30,29,29,39,46,52,44,29,20,17,19,23,27,28,31,30,18,9,46,40,36,31,35,35,43,46,55,51,42,28,20,20,24,28,28,27,18,11,4,46,43,35,34,35,39,41,53,52,53,48,35,27,27,27,27,26,20,8,4,4,48,47,42,32,33,38,42,49,54,53,48,43,36,35,31,25,23,16,7,6,8,50,44,38,34,36,39,45,50,55,54,52,46,44,39,35,31,24,16,8,9,14,51,43,36,36,38,41,47,52,55,53,55,52,50,43,38,34,26,16,9,15,23,52,48,41,39,36,41,47,52,55,57,57,59,56,48,42,37,27,17,12,20,29,54,50,43,41,37,47,48,58,60,60,61,60,61,57,48,37,29,17,16,24,31,57,47,45,43,43,45,50,57,62,63,61,66,63,58,52,42,30,19,18,25,30,58,52,49,45,44,46,52,56,63,63,61,63,60,59,52,43,33,21,18,23,23,60,52,50,44,45,46,55,69,62,60,58,60,60,58,52,43,34,25,18,18,20,62,58,49,48,48,55,57,60,62,61,59,61,64,58,50,42,35,25,20,18,21,65,61,54,48,50,52,58,65,70,60,58,60,61,52,47,43,35,27,21,20,21,61,56,51,52,52,56,57,67,67,66,60,58,53,50,45,41,36,29,22,22,23,51,64,57,53,47,55,64,67,68,66,62,58,51,49,43,41,37,30,24,22,21,59,52,53,52,53,56,63,64,71,70,67,57,52,51,42,42,38,31,24,21,17,61,54,52,51,53,52,52,64,79,80,65,59,54,46,46,44,39,34,28,25,20,54,51,53,49,54,55,58,70,63,69,67,61,57,52,48,43,39,36,32,28,22,55,58,54,54,55,53,69,64,71,65,65,60,58,55,52,47,43,39,35,31,25,57,64,64,62,60,60,61,62,66,64,62,60,60,67,56,51,47,43,38,33,28,57,66,68,68,68,67,68,64,62,62,62,66,65,62,60,55,51,45,39,34,31,55,67,68,69,68,69,66,63,63,62,62,67,65,61,60,54,51,45,39,35,31],
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
