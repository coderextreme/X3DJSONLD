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
    meta(content='dardanel1-0.x3d',name='title'),
    meta(content='X3D Earth tile file for Dardanelles location',name='description'),
    meta(content='Byounghyun Yoo, Don Brutzman',name='creator'),
    meta(content='6 September 2010',name='created'),
    meta(content='12 Jume 2012',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Locations/Dardanelles/Dardanelles.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Locations/Dardanelles/tiles/4/dardanel1-0.x3d',name='identifier'),
    meta(content='Rez, http://planet-earth.org/Rez/RezIndex.html',name='generator'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(repeatS=False,repeatT=False,url=['../../images/4/dardanel1-0.jpg'])),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(39.79722229877732,25.5334665451,0.0),geoSystem=["GD"],height=[0,0,0,0,0,0,0,0,1,1,1,2,2,1,3,1,1,2,2,1,2,2,0,0,0,0,0,0,0,0,0,3,1,2,2,3,2,2,1,1,3,1,9,64,0,0,0,0,0,0,0,0,0,1,0,4,2,2,2,1,2,2,2,47,55,44,0,0,1,1,1,0,0,1,0,-1,1,1,3,0,1,3,2,1,2,1,1,2,0,0,0,0,0,0,0,0,0,0,0,2,1,2,3,2,2,4,1,3,1,1,0,0,0,1,0,0,0,0,1,0,0,0,2,3,2,2,2,2,1,1,1,2,0,0,0,0,0,1,0,0,0,0,0,0,0,1,2,0,1,1,1,0,1,3,0,0,0,0,0,0,0,-1,0,0,0,0,0,1,2,2,1,2,2,3,3,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,2,1,2,1,2,1,2,0,0,0,2,0,1,0,0,0,0,0,0,0,1,0,2,1,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,2,0,3,4,1,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,2,2,2,3,0,0,0,0,0,0,2,0,0,0,1,0,1,0,0,0,0,0,2,2,3,3,2,-1,0,0,0,0,0,0,2,-1,2,0,0,2,1,1,1,0,0,4,3,3,0,0,0,0,3,0,0,0,0,0,0,1,0,1,3,0,0,2,0,0,3,2,0,0,0,0,0,0,1,0,2,0,0,2,1,0,0,1,1,2,1,1,2,1,0,0,0,0,1,0,0,0,0,0,2,1,1,0,1,0,1,1,1,1,1,1,2,0,0,0,0,0,0,0,1,60,20,4,33,60,1,1,0,1,3,3,1,2,0,0,0,0,0,0,1,54,48,62,65,113,129,282,155,40,1,2,1,1,2,3,0,0,0,0,0,1,113,144,136,174,239,387,268,183,164,220,210,38,4,22,1,2,0,0,0,1,0,1,1,72,236,152,232,325,166,179,185,211,166,134,8,3,14,0,0,0,0,1,1,2,1,80,246,157,238,344,168,185,174,218,170,140,10,4,14,0],normalPerVertex=False,xDimension=22,xSpacing=0.023009779,zDimension=22,zSpacing=0.017581536,
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(40.16643453115464,26.49987728550963,0),geoSystem=['GDC'])))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for dardanel1-0.py")
