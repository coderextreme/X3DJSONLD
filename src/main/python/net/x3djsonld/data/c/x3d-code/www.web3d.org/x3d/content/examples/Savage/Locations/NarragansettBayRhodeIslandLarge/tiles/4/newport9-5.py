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
    GeoLOD(center=(41.573110194091946,-71.5493819523225,0.0),range=6150.5674,child1Url=['../../tiles/5/newport18-10.x3d'],child2Url=['../../tiles/5/newport18-11.x3d'],child3Url=['../../tiles/5/newport19-10.x3d'],child4Url=['../../tiles/5/newport19-11.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport9-5.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.54892011792395,-71.57136730636591,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[48,47,53,52,54,60,65,72,81,81,75,57,52,52,56,60,56,53,47,48,51,51,50,45,41,43,49,53,58,65,75,77,69,66,52,47,47,54,55,53,48,45,48,47,51,47,42,45,52,55,55,61,65,65,59,66,57,49,48,54,62,51,45,46,44,46,55,52,46,48,48,55,54,57,55,52,55,52,52,52,53,53,55,55,50,50,52,51,54,58,56,57,54,48,57,53,48,51,48,53,51,54,56,50,52,53,55,51,46,49,57,62,66,58,58,47,47,47,44,46,53,52,48,48,48,46,49,49,54,56,55,54,65,75,73,68,55,50,45,43,46,47,48,52,51,53,47,50,41,58,61,57,58,59,69,77,78,68,59,53,50,46,46,44,46,46,55,54,53,55,54,57,61,65,60,59,71,84,77,72,63,62,50,47,47,43,43,44,55,54,56,59,60,60,62,64,63,61,73,78,79,73,65,57,52,50,48,45,44,45,49,54,57,61,69,63,68,63,65,65,68,74,74,66,59,53,48,52,51,48,47,49,51,54,55,67,67,69,70,66,60,60,75,74,71,60,50,46,52,54,51,57,50,49,48,52,56,65,69,72,67,65,59,59,74,66,61,53,48,49,49,56,61,62,61,50,50,54,60,66,78,73,69,67,59,59,61,65,57,53,52,54,55,67,75,70,64,53,53,58,65,72,79,79,76,68,60,61,67,59,58,54,57,59,68,78,85,82,71,59,56,57,59,74,82,85,77,69,63,63,66,63,58,58,64,69,81,82,84,80,66,60,58,54,61,73,84,85,81,73,68,65,69,59,58,67,70,87,89,98,89,72,63,61,58,53,64,75,88,89,85,76,68,68,71,62,56,55,68,89,104,108,101,80,71,69,66,59,59,79,94,98,93,83,74,71,65,58,55,61,74,90,105,105,95,92,85,74,71,62,62,80,100,105,93,86,76,73,69,61,62,68,83,96,105,98,95,91,86,84,79,71,68,80,93,91,77,72,73,73,75,73,73,78,87,102,107,108,110,110,100,88,84,80,73,75,81,82,79,73,72,72,75,73,73,79,88,102,107,109,111,112,102,89,84,79,74,75,81,82,80,72,72,73],
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
