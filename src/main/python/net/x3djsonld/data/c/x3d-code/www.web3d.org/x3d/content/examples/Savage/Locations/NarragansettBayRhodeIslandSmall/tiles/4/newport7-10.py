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
    GeoLOD(center=(41.55915137776267,-71.26537558237226,0.0),range=2150.0764,child1Url=['../../tiles/5/newport14-20.x3d'],child2Url=['../../tiles/5/newport14-21.x3d'],child3Url=['../../tiles/5/newport15-20.x3d'],child4Url=['../../tiles/5/newport15-21.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport7-10.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.551080519985156,-71.27344644014977,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=24,zSpacing=7.018137E-4,height=[56,58,59,60,65,67,70,74,75,76,78,77,79,81,81,84,86,85,83,81,79,83,80,79,55,52,54,61,64,64,66,67,69,71,71,77,81,84,80,81,85,83,81,81,81,82,83,76,53,59,58,59,61,60,58,64,63,65,69,72,77,78,77,81,84,83,81,83,81,83,82,80,51,57,59,59,53,53,53,53,55,58,65,72,73,71,75,79,81,81,89,83,78,77,77,77,53,57,60,56,53,53,53,53,53,53,53,64,67,69,71,74,74,80,87,80,74,73,71,72,52,55,58,55,53,53,53,53,53,53,53,53,67,66,70,69,72,74,77,73,72,73,75,76,50,56,56,54,53,53,53,53,53,53,53,53,61,64,71,68,73,71,69,71,71,71,75,76,48,54,57,55,53,53,53,53,53,53,53,53,54,66,67,71,73,73,67,68,69,71,71,73,51,55,56,54,53,53,53,53,53,53,53,53,53,60,67,68,69,69,66,67,70,71,72,74,58,56,58,53,53,53,53,53,53,53,53,53,54,62,62,64,67,65,68,70,73,73,79,81,58,56,57,53,53,53,53,53,53,53,53,53,64,67,67,60,66,67,68,76,76,75,80,81,59,59,56,53,53,53,53,53,53,53,53,55,65,69,67,66,68,67,69,74,75,78,79,78,62,58,55,53,53,53,53,53,53,53,54,62,64,69,65,68,70,75,78,74,74,76,79,80,62,60,58,53,53,53,53,53,53,55,64,69,66,68,73,73,70,70,70,73,74,78,82,81,61,59,58,54,53,53,53,53,54,65,71,70,70,67,75,73,69,71,72,74,77,78,81,81,58,59,59,60,59,59,57,61,65,69,73,72,70,69,70,71,70,73,75,76,79,80,81,81,59,57,56,57,60,61,62,63,66,68,69,71,72,73,71,72,72,76,76,80,79,81,81,81,54,56,57,60,62,62,64,66,69,69,71,73,74,73,73,74,74,75,76,79,85,85,86,87,53,53,55,58,59,63,65,66,70,70,70,73,73,72,75,77,78,81,81,83,83,85,87,88,49,51,52,56,58,63,66,66,68,70,72,72,72,73,75,77,80,79,83,86,87,89,90,90,45,47,51,54,56,60,62,65,66,67,68,71,71,73,76,80,81,80,84,85,93,93,91,91,42,43,47,52,55,57,61,61,65,65,68,67,70,71,75,83,81,84,88,83,92,92,88,87,38,42,46,50,52,51,53,58,59,63,62,65,68,72,76,79,83,86,87,83,81,85,86,86,38,41,45,48,50,50,52,55,57,62,60,64,68,71,75,79,82,86,87,85,81,85,86,86],
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
