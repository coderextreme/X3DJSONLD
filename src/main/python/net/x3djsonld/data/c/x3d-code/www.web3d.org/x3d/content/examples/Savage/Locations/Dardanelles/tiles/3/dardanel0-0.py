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
    component(level=1,name='Geospatial'),
    meta(content='dardanel0-0.x3d',name='title'),
    meta(content='X3D Earth tile file for Dardanelles location',name='description'),
    meta(content='Byounghyun Yoo, Don Brutzman',name='creator'),
    meta(content='6 September 2010',name='created'),
    meta(content='12 Jume 2012',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Locations/Dardanelles/Dardanelles.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Locations/Dardanelles/tiles/3/dardanel0-0.x3d',name='identifier'),
    meta(content='Rez, http://planet-earth.org/Rez/RezIndex.html',name='generator'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../../../license.html',name='license')]),
  Scene=Scene(
    children=[
    GeoViewpoint(description='GeoViewpoint_3_00',geoSystem=['GDC'],orientation=(-1,0,0,1.57),position=(39.79722229877732,25.77506923020241,67800.45584024992),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(40.16643453115464,26.49987728550963,0),geoSystem=['GDC'])),
    GeoLOD(center=(39.79722229877732,25.77506923020241,0.0),child1Url=['../../tiles/4/dardanel0-0.x3d'],child2Url=['../../tiles/4/dardanel1-0.x3d'],range=81360.55,
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(repeatS=False,repeatT=False,url=['../../images/3/dardanel0-0.jpg'])),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(39.4280100664,25.5334665451,0.0),geoSystem=["GD"],height=[1,2,1,2,1,0,0,2,0,0,0,0,0,1,1,2,1,0,1,1,0,0,1,0,0,1,0,0,0,1,0,0,0,0,0,0,1,0,1,0,0,1,0,1,0,3,0,0,1,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,2,1,2,2,2,1,1,0,1,-1,1,1,0,2,0,3,0,1,0,0,0,0,0,2,2,2,0,2,0,2,1,0,0,1,0,2,1,0,0,0,1,0,0,0,1,0,0,1,1,1,2,0,2,1,0,2,0,0,0,0,1,0,1,0,0,0,0,0,2,2,3,2,3,2,0,1,2,0,1,1,0,0,1,0,0,0,1,0,0,0,0,2,3,4,2,1,0,1,0,1,3,3,0,0,3,0,0,0,0,0,1,0,3,0,2,4,1,0,2,4,1,2,2,2,2,2,0,0,1,0,0,0,0,0,0,2,1,4,3,3,1,2,1,2,1,2,1,1,1,0,0,0,0,0,0,0,0,1,2,2,1,0,3,2,1,2,3,2,0,1,0,0,0,0,0,0,0,0,0,0,1,3,1,2,2,3,0,2,1,2,27,65,38,0,0,0,0,0,0,0,0,0,0,0,1,1,2,2,4,2,2,2,2,3,3,1,0,0,0,1,0,0,0,0,0,0,0,0,2,3,2,1,1,2,2,3,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,1,1,3,2,2,-1,0,0,0,0,0,0,0,0,-1,0,0,1,0,0,0,2,4,1,2,4,2,0,-1,0,0,0,0,-1,0,0,0,1,1,0,1,1,0,0,0,2,3,2,4,-1,0,0,0,0,0,0,1,0,0,0,0,1,2,0,2,1,1,0,2,4,1,0,0,0,0,0,0,1,1,1,0,0,1,1,0,1,1,1,2,3,1,2,3,0,0,0,0,0,0,114,234,42,115,112,248,134,167,220,123,75,9,7,2,2,1,0,0,0,0,1,2,2,137,429,268,366,360,295,132,99,265,238,217,20,2,1,2,0,0,0,0,1,1,2,115,423,277,364,373,304,124,93,275,239,235,24,2,2,2],normalPerVertex=False,xDimension=22,xSpacing=0.023009779,zDimension=22,zSpacing=0.03516307,
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

print ("python x3d.py load successful for dardanel0-0.py")
