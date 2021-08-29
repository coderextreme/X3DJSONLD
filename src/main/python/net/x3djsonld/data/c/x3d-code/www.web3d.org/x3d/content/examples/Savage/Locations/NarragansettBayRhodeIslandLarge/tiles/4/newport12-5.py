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
    GeoLOD(center=(41.71825065109993,-71.5493819523225,0.0),range=6150.5674,child1Url=['../../tiles/5/newport24-10.x3d'],child2Url=['../../tiles/5/newport24-11.x3d'],child3Url=['../../tiles/5/newport25-10.x3d'],child4Url=['../../tiles/5/newport25-11.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport12-5.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.69406057493193,-71.57136730636591,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[72,72,72,74,77,74,70,69,69,69,69,69,69,77,75,69,61,58,56,50,48,48,72,72,73,76,71,73,79,69,69,69,69,69,72,90,86,72,60,53,49,48,47,47,82,78,74,73,70,70,71,69,69,69,69,69,75,93,86,74,56,50,48,45,44,44,75,81,75,74,72,69,66,67,67,68,69,69,80,91,83,72,49,48,51,49,46,44,73,78,79,73,68,68,66,66,66,66,67,74,93,84,76,64,48,53,59,53,50,47,73,75,79,70,67,67,67,68,68,66,66,77,85,78,70,56,52,62,65,58,57,56,72,76,76,68,72,73,73,74,72,72,66,76,76,65,62,52,56,59,60,60,60,60,78,76,76,79,80,80,84,79,77,73,69,70,76,72,64,58,62,61,59,59,58,55,78,81,78,83,87,88,90,85,83,76,67,65,63,63,60,65,69,70,65,59,50,45,87,81,90,93,97,99,92,87,84,76,76,73,66,66,71,78,73,70,63,57,47,49,90,88,95,106,107,101,96,91,79,81,78,73,66,70,78,81,79,70,59,55,50,50,97,100,100,115,108,104,98,91,82,81,78,87,74,72,75,71,68,57,56,53,52,52,110,108,108,107,111,106,100,89,81,81,87,94,74,72,72,70,63,66,63,59,64,63,106,111,112,107,106,100,92,86,81,82,81,81,74,72,74,67,81,80,80,79,77,72,108,111,111,105,104,96,97,90,87,85,84,87,81,70,68,68,82,86,82,79,65,63,107,109,107,101,94,91,94,90,90,87,86,88,78,71,69,73,82,81,79,72,59,55,102,101,101,98,94,91,92,85,86,81,76,73,72,71,72,74,76,76,72,63,46,42,96,91,94,93,93,90,97,85,70,71,74,67,68,68,74,73,74,70,65,47,32,29,90,88,90,92,90,93,102,73,70,71,62,61,58,66,70,70,68,58,51,40,39,30,91,83,89,90,93,100,87,72,69,67,67,59,55,53,66,64,49,41,31,35,43,38,80,81,82,86,94,85,72,73,68,66,71,59,66,63,58,46,35,32,44,50,42,41,79,81,82,85,92,81,71,74,68,65,70,59,66,63,60,43,33,32,43,49,42,43],
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
