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
    meta(content='dardanel0-1.x3d',name='title'),
    meta(content='X3D Earth tile file for Dardanelles location',name='description'),
    meta(content='Byounghyun Yoo, Don Brutzman',name='creator'),
    meta(content='6 September 2010',name='created'),
    meta(content='12 Jume 2012',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Locations/Dardanelles/Dardanelles.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Locations/Dardanelles/tiles/4/dardanel0-1.x3d',name='identifier'),
    meta(content='Rez, http://planet-earth.org/Rez/RezIndex.html',name='generator'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(repeatS=False,repeatT=False,url=['../../images/4/dardanel0-1.jpg'])),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(39.4280100664,26.016671915304816,0.0),geoSystem=["GD"],height=[0,1,1,0,1,1,3,1,0,0,0,1,1,2,2,0,0,0,1,0,1,1,0,1,1,1,1,0,2,2,2,0,0,1,0,0,1,0,0,0,0,1,-1,1,1,1,0,1,202,211,172,60,7,1,1,1,3,0,1,0,2,0,0,0,1,2,1,1,0,289,341,388,343,370,167,168,26,4,0,59,0,0,0,3,2,0,0,0,1,0,1,133,242,304,226,268,317,285,256,198,92,102,125,113,18,-2,-1,1,1,2,1,1,0,10,155,193,166,176,202,210,286,215,88,227,195,196,213,166,32,-2,0,2,1,2,1,4,72,88,87,98,104,141,225,166,295,298,313,299,333,372,225,155,215,142,1,2,1,2,24,11,15,123,178,182,304,312,275,262,392,280,228,381,389,336,335,261,0,1,2,1,6,8,10,288,193,386,365,332,394,412,405,331,301,256,416,475,420,447,0,2,0,1,1,11,30,207,377,367,461,386,422,461,544,373,280,252,290,342,438,440,1,2,0,1,1,3,52,102,254,429,462,623,467,487,431,383,340,292,335,347,345,366,2,2,1,1,1,0,11,40,86,203,287,361,423,459,412,337,257,324,275,464,432,431,2,1,1,0,1,0,4,191,386,264,439,411,323,253,198,242,198,177,226,350,245,238,0,0,1,0,1,2,1,120,451,340,311,358,386,287,195,179,122,136,147,249,325,346,1,0,1,3,0,0,2,82,188,262,315,362,389,366,305,97,95,145,158,223,223,216,0,2,0,0,1,2,8,104,202,208,242,351,399,319,210,81,133,183,122,163,176,192,0,0,0,1,1,2,5,38,149,197,280,508,311,197,117,103,161,162,105,132,194,208,1,3,1,2,2,2,51,25,133,177,222,226,193,152,84,78,145,118,109,117,164,190,1,1,0,0,1,1,70,73,106,158,182,219,96,90,57,87,146,69,89,105,106,113,1,2,1,1,1,2,8,70,110,129,165,175,109,66,65,50,53,59,61,67,87,86,2,1,19,2,3,2,24,43,82,122,180,192,103,69,45,63,70,78,58,59,66,69,2,1,22,2,4,2,24,43,83,121,180,189,106,61,45,62,72,79,58,60,66,69],normalPerVertex=False,xDimension=22,xSpacing=0.023009779,zDimension=22,zSpacing=0.017581536,
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

print ("python x3d.py load successful for dardanel0-1.py")
