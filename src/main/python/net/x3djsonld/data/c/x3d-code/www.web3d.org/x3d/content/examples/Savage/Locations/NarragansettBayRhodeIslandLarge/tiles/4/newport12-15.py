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
    GeoLOD(center=(41.71825065109993,-71.10967487145433,0.0),range=6150.5674,child1Url=['../../tiles/5/newport24-30.x3d'],child2Url=['../../tiles/5/newport24-31.x3d'],child3Url=['../../tiles/5/newport25-30.x3d'],child4Url=['../../tiles/5/newport25-31.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport12-15.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.69406057493193,-71.13166022549774,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[39,39,39,39,39,39,39,39,39,39,41,43,43,43,42,44,42,42,44,52,58,58,39,40,40,39,39,39,40,41,41,41,43,45,46,45,43,43,43,43,49,57,63,63,48,48,47,46,45,44,41,39,39,39,39,40,40,41,41,42,44,45,50,56,63,65,41,48,52,55,50,48,42,39,39,39,41,43,43,45,43,42,43,45,47,54,64,66,41,50,55,61,59,53,44,39,39,39,39,44,43,47,43,41,42,43,48,55,67,68,51,55,56,62,59,51,44,39,39,39,39,39,41,43,45,41,41,41,43,52,68,71,53,61,64,61,60,49,41,39,39,39,39,39,39,41,41,40,40,42,46,55,69,70,53,59,65,66,56,55,41,39,39,39,39,39,39,39,39,39,39,39,45,55,66,67,50,57,63,71,66,53,41,39,39,39,39,39,39,39,39,39,39,39,45,52,64,66,44,53,65,69,65,56,45,39,39,39,39,39,39,39,40,39,39,39,42,48,59,60,45,53,61,61,62,54,43,39,39,39,39,39,39,39,39,39,39,39,43,50,53,56,53,50,52,54,57,52,44,39,39,39,39,39,39,39,39,39,39,39,42,52,55,57,59,53,50,50,50,50,47,40,39,39,39,39,39,39,39,39,39,39,40,48,59,60,56,54,52,50,48,47,44,43,39,40,44,41,39,39,39,39,39,39,40,49,58,57,58,55,52,48,47,45,43,41,41,39,39,40,41,39,39,39,39,39,41,48,52,51,67,60,52,47,44,44,44,44,43,42,41,40,39,39,39,39,39,39,39,43,47,49,70,59,50,46,44,43,43,45,44,43,44,46,39,39,39,39,39,40,40,40,42,44,61,56,50,48,46,46,53,50,43,46,51,52,39,39,39,39,39,39,45,44,46,47,55,53,51,49,48,50,52,50,48,48,55,52,41,39,39,39,39,39,39,41,49,51,54,53,52,50,50,52,51,51,51,51,55,54,47,40,39,39,39,39,39,40,48,49,60,57,53,50,54,53,53,50,54,54,60,55,50,41,40,39,39,39,40,42,49,48,60,58,53,51,54,53,54,50,53,54,60,56,50,41,39,39,39,39,41,42,48,48],
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
