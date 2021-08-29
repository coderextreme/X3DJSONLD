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
    GeoViewpoint(description='GeoViewpoint_3_40',geoSystem=['GDC'],position=(26.457754674260052,55.27711712740383,29163.6915586987),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])),
    GeoLOD(center=(26.457754674260052,55.27711712740383,0.0),range=34996.43,child1Url=['../../tiles/4/StraitsOfHormuz-Small8-0.x3d'],child2Url=['../../tiles/4/StraitsOfHormuz-Small8-1.x3d'],child3Url=['../../tiles/4/StraitsOfHormuz-Small9-0.x3d'],child4Url=['../../tiles/4/StraitsOfHormuz-Small9-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/StraitsOfHormuz-Small4-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.3456597347756,55.1264761069,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0143467635,zDimension=22,zSpacing=0.010675709,height=[1,8,1,1,8,1,9,2,1,0,6,-23,5,0,7,11,-3,7,-5,1,-4,1,-1,0,-6,1,4,-3,8,9,0,-7,1,2,1,-4,1,-8,-2,4,2,-3,3,4,3,3,8,3,5,-4,7,4,0,8,1,0,0,-9,0,3,0,7,2,-5,-2,0,4,-2,3,0,0,5,5,5,4,-2,2,-2,1,8,2,0,10,3,-3,1,1,7,1,1,0,0,3,3,4,0,6,0,4,-1,7,0,2,-1,10,1,0,10,3,8,0,0,8,1,5,1,3,0,9,-3,3,0,9,-2,1,-5,6,2,-9,12,0,7,2,7,-1,3,4,0,1,0,5,-1,3,0,4,1,5,-2,6,10,-5,-17,4,5,3,6,0,3,-17,0,0,3,4,3,-2,0,0,0,0,3,-7,1,11,-18,-16,-22,0,0,2,1,1,0,0,0,2,1,0,0,0,7,-21,6,-5,-9,10,8,-4,10,0,5,0,1,2,1,-2,1,4,2,6,4,0,1,-1,9,8,-8,-3,16,2,2,2,3,1,0,1,0,0,1,0,1,1,4,0,3,3,1,5,10,24,3,0,-1,4,2,2,0,0,3,4,0,4,0,2,-1,2,0,4,-2,12,-4,0,10,0,0,0,0,3,1,1,3,0,1,8,7,-1,0,2,0,4,0,3,4,-3,0,1,6,-1,6,0,4,4,-1,0,6,2,-2,1,4,1,6,4,8,4,-2,-3,0,-9,-7,5,5,-2,2,0,0,0,-4,1,-1,6,2,4,7,7,0,6,0,2,0,-1,0,3,6,2,5,0,0,5,0,5,3,12,11,1,7,-7,0,0,4,4,3,4,1,0,2,1,0,3,3,1,-2,0,2,5,4,12,3,0,0,3,0,5,3,5,5,7,0,0,0,3,6,0,4,-1,-8,1,-3,5,-1,0,-2,9,2,5,-2,0,0,0,0,4,5,1,-1,6,1,2,0,2,-2,-1,0,0,-1,-7,5,-1,0,0,0,0,1,0,0,2,0,0,4,2,-1,1,0,4,0,-1,0,0,0,0,1,0,0,1,0,5,0,0,0,0,1,-1,1,4,3,3,2,0,0,0,9,6,0,-4,-2,0,0,4,2,1,2,0,2,0,0,4,3,3,0,0,0,0,9,6,0,-2,-2],
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
