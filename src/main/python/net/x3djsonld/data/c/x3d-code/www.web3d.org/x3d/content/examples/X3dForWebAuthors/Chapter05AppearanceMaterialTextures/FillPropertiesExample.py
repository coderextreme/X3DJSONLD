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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    #  The following component tag is needed since FillProperties node is not part of the default Immersive profile 
    component(level=3,name='Shape'),
    meta(content='FillPropertiesExample.x3d',name='title'),
    meta(content='Demonstrate various FillProperties values.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='20 August 2008',name='created'),
    meta(content='14 June 2020',name='modified'),
    meta(content='FillPropertiesHatchStyle.png',name='Image'),
    meta(content='FillPropertiesHatchStyleOctaga.png',name='Image'),
    meta(content='http://X3dGraphics.com',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dResources.html',name='reference'),
    meta(content='X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com',name='subject'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/FillPropertiesExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='FillProperties.x3d'),
    Viewpoint(description='FillProperties hatchStyle examples',position=(0,0,24)),
    Transform(DEF='OverallAdjustment',
      children=[
      Transform(DEF='FirstRowBoxes',translation=(0,7,0),
        children=[
        Transform(translation=(-9,0,0),
          children=[
          Shape(
            geometry=Box(),
            appearance=Appearance(DEF='FillAppearance1',
              material=Material(diffuseColor=(1,0,0)),
              fillProperties=FillProperties(
                #  hatchStyle='1' horizontal equally-spaced parallel lines 
                )))]),
        Transform(translation=(-6,0,0),
          children=[
          Shape(
            geometry=Box(),
            appearance=Appearance(DEF='FillAppearance2',
              material=Material(diffuseColor=(1,0.5,0)),
              fillProperties=FillProperties(hatchStyle=2,
                #  hatchStyle='2' vertical equally-spaced parallel lines 
                )))]),
        Transform(translation=(-3,0,0),
          children=[
          Shape(
            geometry=Box(),
            appearance=Appearance(DEF='FillAppearance3',
              material=Material(diffuseColor=(1,1,0)),
              fillProperties=FillProperties(hatchStyle=3,
                #  hatchStyle='3' positive slope equally-spaced parallel lines 
                )))]),
        Transform(
          children=[
          Shape(
            geometry=Box(),
            appearance=Appearance(DEF='FillAppearance4',
              material=Material(diffuseColor=(0,1,0)),
              fillProperties=FillProperties(hatchStyle=4,
                #  hatchStyle='4' negative slope equally-spaced parallel lines 
                )))]),
        Transform(translation=(3,0,0),
          children=[
          Shape(
            geometry=Box(),
            appearance=Appearance(DEF='FillAppearance5',
              material=Material(diffuseColor=(0,0,1)),
              fillProperties=FillProperties(hatchStyle=5,
                #  hatchStyle='5' horizontal/vertical crosshatch 
                )))]),
        Transform(translation=(6,0,0),
          children=[
          Shape(
            geometry=Box(),
            appearance=Appearance(DEF='FillAppearance6',
              material=Material(diffuseColor=(0,1,1)),
              fillProperties=FillProperties(hatchStyle=6,
                #  hatchStyle='6' positive slope / negative slope crosshatch 
                )))])]),
      Transform(DEF='SecondRowText',translation=(0,5,0),
        children=[
        Transform(translation=(-9,0,0),
          children=[
          Shape(
            geometry=Text(string=["1"],
              fontStyle=FontStyle(DEF='Middle',justify=["MIDDLE","MIDDLE"],size=2,style_='BOLD')),
            appearance=Appearance(USE='FillAppearance1'))]),
        Transform(translation=(-6,0,0),
          children=[
          Shape(
            geometry=Text(string=["2"],
              fontStyle=FontStyle(USE='Middle')),
            appearance=Appearance(USE='FillAppearance2'))]),
        Transform(translation=(-3,0,0),
          children=[
          Shape(
            geometry=Text(string=["3"],
              fontStyle=FontStyle(USE='Middle')),
            appearance=Appearance(USE='FillAppearance3'))]),
        Transform(
          children=[
          Shape(
            geometry=Text(string=["4"],
              fontStyle=FontStyle(USE='Middle')),
            appearance=Appearance(USE='FillAppearance4'))]),
        Transform(translation=(3,0,0),
          children=[
          Shape(
            geometry=Text(string=["5"],
              fontStyle=FontStyle(USE='Middle')),
            appearance=Appearance(USE='FillAppearance5'))]),
        Transform(translation=(6,0,0),
          children=[
          Shape(
            geometry=Text(string=["6"],
              fontStyle=FontStyle(USE='Middle')),
            appearance=Appearance(USE='FillAppearance6'))])]),
      Transform(DEF='ThirdRowBoxes',translation=(0,2,0),
        children=[
        Transform(translation=(-9,0,0),
          children=[
          Shape(
            geometry=Box(),
            appearance=Appearance(DEF='FillAppearance7',
              material=Material(diffuseColor=(1,0,0)),
              fillProperties=FillProperties(hatchStyle=7,
                #  hatchStyle='7' (optional support) cast iron or malleable iron and general use for all materials 
                )))]),
        Transform(translation=(-6,0,0),
          children=[
          Shape(
            geometry=Box(),
            appearance=Appearance(DEF='FillAppearance8',
              material=Material(diffuseColor=(1,0.5,0)),
              fillProperties=FillProperties(hatchStyle=8,
                #  hatchStyle='8' (optional support) steel 
                )))]),
        Transform(translation=(-3,0,0),
          children=[
          Shape(
            geometry=Box(),
            appearance=Appearance(DEF='FillAppearance9',
              material=Material(diffuseColor=(1,1,0)),
              fillProperties=FillProperties(hatchStyle=9,
                #  hatchStyle='9' (optional support) bronze, brass, copper, and compositions 
                )))]),
        Transform(
          children=[
          Shape(
            geometry=Box(),
            appearance=Appearance(DEF='FillAppearance10',
              material=Material(diffuseColor=(0,1,0)),
              fillProperties=FillProperties(hatchStyle=10,
                #  hatchStyle='10' (optional support) white metal, zinc, lead, babbit, and alloys 
                )))]),
        Transform(translation=(3,0,0),
          children=[
          Shape(
            geometry=Box(),
            appearance=Appearance(DEF='FillAppearance11',
              material=Material(diffuseColor=(0,0,1)),
              fillProperties=FillProperties(hatchStyle=11,
                #  hatchStyle='11' (optional support) magnesium, aluminum, and aluminum alloys 
                )))]),
        Transform(translation=(6,0,0),
          children=[
          Shape(
            geometry=Box(),
            appearance=Appearance(DEF='FillAppearance12',
              material=Material(diffuseColor=(0,1,1)),
              fillProperties=FillProperties(hatchStyle=12,
                #  hatchStyle='12' (optional support) rubber, plastic, and electrical insulation 
                )))])]),
      Transform(DEF='FourthRowText',
        children=[
        Transform(translation=(-9,0,0),
          children=[
          Shape(
            geometry=Text(string=["7"],
              fontStyle=FontStyle(USE='Middle')),
            appearance=Appearance(USE='FillAppearance7'))]),
        Transform(translation=(-6,0,0),
          children=[
          Shape(
            geometry=Text(string=["8"],
              fontStyle=FontStyle(USE='Middle')),
            appearance=Appearance(USE='FillAppearance8'))]),
        Transform(translation=(-3,0,0),
          children=[
          Shape(
            geometry=Text(string=["9"],
              fontStyle=FontStyle(USE='Middle')),
            appearance=Appearance(USE='FillAppearance9'))]),
        Transform(
          children=[
          Shape(
            geometry=Text(string=["10"],
              fontStyle=FontStyle(USE='Middle')),
            appearance=Appearance(USE='FillAppearance10'))]),
        Transform(translation=(3,0,0),
          children=[
          Shape(
            geometry=Text(string=["11"],
              fontStyle=FontStyle(USE='Middle')),
            appearance=Appearance(USE='FillAppearance11'))]),
        Transform(translation=(6,0,0),
          children=[
          Shape(
            geometry=Text(string=["12"],
              fontStyle=FontStyle(USE='Middle')),
            appearance=Appearance(USE='FillAppearance12'))])]),
      Transform(DEF='FifthRowBoxes',translation=(0,-3,0),
        children=[
        Transform(translation=(-9,0,0),
          children=[
          Shape(
            geometry=Box(),
            appearance=Appearance(DEF='FillAppearance13',
              material=Material(diffuseColor=(1,0,0)),
              fillProperties=FillProperties(hatchStyle=13,
                #  hatchStyle='13' (optional support) cork, felt, fabric, leather, and fibre 
                )))]),
        Transform(translation=(-6,0,0),
          children=[
          Shape(
            geometry=Box(),
            appearance=Appearance(DEF='FillAppearance14',
              material=Material(diffuseColor=(1,0.5,0)),
              fillProperties=FillProperties(hatchStyle=14,
                #  hatchStyle='14' (optional support) thermal insulation 
                )))]),
        Transform(translation=(-3,0,0),
          children=[
          Shape(
            geometry=Box(),
            appearance=Appearance(DEF='FillAppearance15',
              material=Material(diffuseColor=(1,1,0)),
              fillProperties=FillProperties(hatchStyle=15,
                #  hatchStyle='15' (optional support) titanium and refractory material 
                )))]),
        Transform(
          children=[
          Shape(
            geometry=Box(),
            appearance=Appearance(DEF='FillAppearance16',
              material=Material(diffuseColor=(0,1,0)),
              fillProperties=FillProperties(hatchStyle=16,
                #  hatchStyle='16' (optional support) marble, slate, porcelain, glass, etc. 
                )))]),
        Transform(translation=(3,0,0),
          children=[
          Shape(
            geometry=Box(),
            appearance=Appearance(DEF='FillAppearance17',
              material=Material(diffuseColor=(0,0,1)),
              fillProperties=FillProperties(hatchStyle=17,
                #  hatchStyle='17' (optional support) earth 
                )))]),
        Transform(translation=(6,0,0),
          children=[
          Shape(
            geometry=Box(),
            appearance=Appearance(DEF='FillAppearance18',
              material=Material(diffuseColor=(0,1,1)),
              fillProperties=FillProperties(hatchStyle=18,
                #  hatchStyle='18' (optional support) sand 
                )))]),
        Transform(translation=(9,0,0),
          children=[
          Shape(
            geometry=Box(),
            appearance=Appearance(DEF='FillAppearance19',
              material=Material(diffuseColor=(0.3,0.3,0.3)),
              fillProperties=FillProperties(hatchStyle=19,
                #  hatchStyle='19' (optional support) repeating dot 
                )))])]),
      Transform(DEF='SixthRowText',translation=(0,-5,0),
        children=[
        Transform(translation=(-9,0,0),
          children=[
          Shape(
            geometry=Text(string=["13"],
              fontStyle=FontStyle(USE='Middle')),
            appearance=Appearance(USE='FillAppearance13'))]),
        Transform(translation=(-6,0,0),
          children=[
          Shape(
            geometry=Text(string=["14"],
              fontStyle=FontStyle(USE='Middle')),
            appearance=Appearance(USE='FillAppearance14'))]),
        Transform(translation=(-3,0,0),
          children=[
          Shape(
            geometry=Text(string=["15"],
              fontStyle=FontStyle(USE='Middle')),
            appearance=Appearance(USE='FillAppearance15'))]),
        Transform(
          children=[
          Shape(
            geometry=Text(string=["16"],
              fontStyle=FontStyle(USE='Middle')),
            appearance=Appearance(USE='FillAppearance16'))]),
        Transform(translation=(3,0,0),
          children=[
          Shape(
            geometry=Text(string=["17"],
              fontStyle=FontStyle(USE='Middle')),
            appearance=Appearance(USE='FillAppearance17'))]),
        Transform(translation=(6,0,0),
          children=[
          Shape(
            geometry=Text(string=["18"],
              fontStyle=FontStyle(USE='Middle')),
            appearance=Appearance(USE='FillAppearance18'))]),
        Transform(translation=(9,0,0),
          children=[
          Shape(
            geometry=Text(string=["19"],
              fontStyle=FontStyle(USE='Middle')),
            appearance=Appearance(USE='FillAppearance19'))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for FillPropertiesExample.py")
