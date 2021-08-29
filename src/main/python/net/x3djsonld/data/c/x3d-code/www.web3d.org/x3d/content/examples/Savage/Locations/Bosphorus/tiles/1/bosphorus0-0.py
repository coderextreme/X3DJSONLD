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
    GeoViewpoint(description='GeoViewpoint_1_00',geoSystem=['GDC'],position=(41.06225017873692,28.73422636498435,81481.91021756065),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])),
    GeoLOD(center=(41.06225017873692,28.73422636498435,0.0),range=97778.29,child1Url=['../../tiles/2/bosphorus0-0.x3d'],child2Url=['../../tiles/2/bosphorus1-0.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/1/bosphorus0-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.6249052805,28.4375,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.028259654,zDimension=21,zSpacing=0.04373449,height=[0,-1,0,-1,-1,0,0,0,-1,0,0,-1,0,1,0,0,0,0,121,134,96,51,0,-1,0,-1,0,0,-1,0,0,-1,0,0,0,0,1,0,0,-1,4,-1,1,0,0,0,-1,-1,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,-2,0,-2,-1,-1,-1,0,0,0,0,0,-2,0,-2,-1,1,-1,1,-1,0,-1,-3,-1,0,-1,-1,0,0,-1,-1,0,0,0,0,-1,0,0,0,-2,-1,-2,0,0,-1,0,0,-2,-2,-2,0,0,0,-1,0,-1,-1,0,-1,-2,0,0,-1,-1,-2,0,-1,0,-1,-1,0,0,-1,-1,0,-1,-2,-1,-1,0,-1,0,-1,0,0,-1,-1,0,0,0,0,0,0,0,-1,0,0,0,0,-1,-1,1,-1,2,0,0,-1,-1,0,0,0,0,0,-1,0,0,0,-2,0,0,-1,82,45,98,22,45,0,22,34,4,4,0,0,1,3,-2,0,1,1,116,130,10,2,108,182,53,100,17,14,101,52,31,28,64,27,0,-12,65,82,187,126,73,9,2,11,121,110,152,43,50,73,67,64,103,128,87,36,110,107,94,124,140,178,37,3,11,85,159,129,142,91,96,102,161,167,162,166,87,94,73,82,114,130,222,30,17,4,105,106,132,131,32,107,116,70,215,139,172,81,25,103,143,139,37,34,36,74,68,30,32,107,160,22,119,109,156,65,147,145,138,92,94,129,122,190,165,166,112,134,68,143,39,138,75,101,140,128,94,97,108,115,94,127,104,76,67,12,67,69,112,113,107,63,107,56,135,71,47,124,23,67,61,77,16,0,-1,-1,0,0,0,0,81,69,132,32,6,43,38,23,42,61,5,-3,0,0,0,0,0,1,0,0,1,0,10,48,25,22,1,9,0,0,0,0,0,0,0,-2,0,0,1,0,1,0,2,0,38,56,0,0,-2,0,-3,0,-1,-1,-2,0,3,0,1,1,3,0,0,0,2,1,1,0,1,0,0,0,0,0,0,-1,0,0,0,0,2,1,4,0,3,0,1,1,1,0,1,0,0,0,0,0,0,-1,1,0,0,0,3,0,3,1,2,0,1,2],
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
