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

newModel=X3D(profile='Immersive',version='3.2',
  head=head(
    children=[
    meta(content='*enter FileNameWithNoAbbreviations.x3d here*',name='title'),
    meta(content='*enter description here, short-sentence summaries preferred*',name='description'),
    meta(content='*enter name of original author here*',name='creator'),
    meta(content='*if manually translating VRML-to-X3D, enter name of person translating here*',name='translator'),
    meta(content='*enter date of initial version here*',name='created'),
    meta(content='*enter date of translation here*',name='translated'),
    meta(content='*enter date of latest revision here*',name='modified'),
    meta(content='*enter version here, if any*',name='version'),
    meta(content='*enter reference citation or relative/online url here*',name='reference'),
    meta(content='*enter additional url/bibliographic reference information here*',name='reference'),
    meta(content='*enter reference resource here if required to support function, delivery, or coherence of content*',name='requires'),
    meta(content='*enter copyright information here* Example: Copyright (c) Web3D Consortium Inc. 2008',name='rights'),
    meta(content='*enter drawing filename/url here*',name='drawing'),
    meta(content='*enter image filename/url here*',name='Image'),
    meta(content='*enter movie filename/url here*',name='MovingImage'),
    meta(content='*enter photo filename/url here*',name='photo'),
    meta(content='*enter subject keywords here*',name='subject'),
    meta(content='*enter permission statements or url here*',name='accessRights'),
    meta(content='*insert any known warnings, bugs or errors here*',name='warning'),
    meta(content='*enter online Uniform Resource Identifier (URI) or Uniform Resource Locator (URL) address for this file here*',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    NavigationInfo(type=['examine']),
    #  Tower 
    Transform(DEF='MuroFrontSotto',
      children=[
      Shape(
        geometry=Box(size=(7.3,4.27,1.34)),
        appearance=Appearance(
          material=Material(diffuseColor=(1,0.75,0.25))))]),
    Transform(DEF='MuroLatSotto',translation=(-2.98,0,-2.165),
      children=[
      Shape(
        geometry=Box(size=(1.34,4.27,2.99)),
        appearance=Appearance(
          material=Material(diffuseColor=(1,0.75,0.25))))]),
    Transform(DEF='Scale1',translation=(3.43,-2.135,-0.67),rotation=(0,1,0,1.57),
      children=[
      Shape(DEF='scal',
        geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,-1,2,3,4,5,-1],solid=False,
          coord=Coordinate(point=[(0,0,0),(1.45,0,0),(1.45,0.26,0),(0,0.26,0),(0,0.26,-0.35),(1.45,0.26,-0.35)])),
        appearance=Appearance(
          material=Material(diffuseColor=(1,0.75,0.25)))),
      Transform(translation=(0,0.26,-0.35),
        children=[
        Shape(USE='scal')]),
      Transform(translation=(0,0.52,-0.70),
        children=[
        Shape(USE='scal')]),
      Transform(translation=(0,0.78,-1.05),
        children=[
        Shape(USE='scal')]),
      Transform(translation=(0,1.04,-1.40),
        children=[
        Shape(USE='scal')]),
      Transform(translation=(0,1.3,-1.75),
        children=[
        Shape(USE='scal')]),
      Transform(translation=(0,1.56,-2.1),
        children=[
        Shape(USE='scal')]),
      Transform(translation=(0,1.82,-2.45),
        children=[
        Shape(USE='scal')]),
      Transform(translation=(0,2.08,-2.8),
        children=[
        Shape(USE='scal')]),
      Transform(translation=(0,2.34,-3.15),
        children=[
        Shape(USE='scal')]),
      Transform(translation=(0,2.6,-3.5),
        children=[
        Shape(USE='scal')])]),
    Transform(DEF='TramezzoIngresso',translation=(3.365,0,-2.25),rotation=(0,0,0,0),
      children=[
      Shape(
        geometry=Box(size=(2.35,4.27,0.22)),
        appearance=Appearance(
          material=Material(diffuseColor=(1,0.75,0.25))))]),
    Transform(DEF='Strozzatura',translation=(0.19,-4,-2.3),
      children=[
      Shape(
        geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,5,4,-1,1,2,6,5,-1,2,3,7,6,-1,3,0,4,7,-1,0,1,2,3,-1,4,5,6,7,-1],solid=False,
          coord=Coordinate(point=[(0,0,0),(2,0,-0.3),(2,0,0.41),(0,0,0.71),(0,8,0),(2,8,-0.3),(2,8,0.41),(0,8,0.71)])),
        appearance=Appearance(
          material=Material(diffuseColor=(1,0.75,0.25))))]),
    Transform(DEF='Strozzatura2',translation=(0.19,-4,-3.7),
      children=[
      Shape(
        geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,5,4,-1,1,2,6,5,-1,2,3,7,6,-1,3,0,4,7,-1,0,1,2,3,-1,4,5,6,7,-1],solid=False,
          coord=Coordinate(point=[(0,0,0.2),(2,0,0.2),(2,0,0.41),(0,0,0.71),(0,8,0.2),(2,8,0.2),(2,8,0.41),(0,8,0.71)])),
        appearance=Appearance(
          material=Material(diffuseColor=(1,0.75,0.25))))]),
    Transform(DEF='MuroDietro1',translation=(-1.31,0,-3.141),
      children=[
      Shape(
        geometry=Box(size=(3,8,0.3)),
        appearance=Appearance(
          material=Material(diffuseColor=(1,0.75,0.25))))]),
    Transform(DEF='MuroDietro2',translation=(-0.95,0,-3.51),
      children=[
      Shape(
        geometry=Box(size=(5.4,8,0.3)),
        appearance=Appearance(
          material=Material(diffuseColor=(1,0.75,0.25))))]),
    Transform(DEF='Pavimento1',translation=(-1.4,0.675,-1),
      children=[
      Shape(
        geometry=Box(size=(2.2,0.1,2.5)),
        appearance=Appearance(
          material=Material(diffuseColor=(1,0.75,0.25))))]),
    Transform(DEF='Scalino',translation=(-1.2,0.85,-2.8),
      children=[
      Shape(
        geometry=Box(size=(3,0.26,2)),
        appearance=Appearance(
          material=Material(diffuseColor=(1,0.75,0.25))))]),
    Transform(DEF='Scalino2',translation=(-1.2,0.65,-2.8),
      children=[
      Shape(
        geometry=Box(size=(3,0.36,2)),
        appearance=Appearance(
          material=Material(diffuseColor=(1,0.75,0.25))))]),
    Transform(DEF='Scale2',translation=(-1.3,0.98,-3.2495),rotation=(0,1,0,-1.57),
      children=[
      Shape(DEF='scal2',
        geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,-1,2,3,4,5,-1,0,3,4,-1,1,2,7,6,-1],solid=False,
          coord=Coordinate(point=[(0,0,0),(1.45,0,0),(1.45,0.26,0),(0,0.26,0),(0,0.26,-0.5),(1.45,0.26,-0.5),(1.45,0,-1.5),(1.45,0.26,-1.5)])),
        appearance=Appearance(
          material=Material(diffuseColor=(1,0.75,0.25)))),
      Transform(translation=(0,0.26,-0.5),
        children=[
        Shape(USE='scal2')]),
      Transform(translation=(0,0.52,-1),
        children=[
        Shape(USE='scal2')]),
      Transform(translation=(0,0.78,-1.5),
        children=[
        Shape(USE='scal2')])]),
    Transform(DEF='Pavimento2',translation=(1.4,1.97,-2.84),
      children=[
      Shape(
        geometry=Box(size=(2.2,0.1,1)),
        appearance=Appearance(
          material=Material(diffuseColor=(1,0.75,0.25))))]),
    Transform(DEF='Finestra',translation=(-4.23,-0.36,-0.834),rotation=(0,1,0,1.57),
      children=[
      Transform(DEF='finestra1',
        children=[
        Transform(translation=(-1.5,2.5,3),rotation=(1,0,0,-1.57),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,5,4,-1,1,2,6,5,-1,2,3,7,6,-1,3,0,4,7,-1],solid=False,
              coord=Coordinate(point=[(0,0,0),(1.34,0,0),(0.9,0,0.182),(0.44,0,0.182),(0,0.858,0),(1.34,0.858,0),(0.9,0.858,0.182),(0.44,0.858,0.182)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))])]),
      Transform(DEF='finestra2',
        children=[
        Transform(translation=(-1.5,3.455,3),rotation=(1,0,0,-1.57),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,5,4,-1,1,2,6,5,-1,2,3,7,6,-1,3,0,4,7,-1],solid=False,
              coord=Coordinate(point=[(0,0,0),(1.34,0,0),(0.9,0,-0.182),(0.44,0,-0.182),(0,0.858,0),(1.34,0.858,0),(0.9,0.858,-0.182),(0.44,0.858,-0.182)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))])]),
      Transform(DEF='finestra11',translation=(-1.5,2.495,3.145),
        children=[
        Transform(translation=(0,0,-1),rotation=(1,0,0,0),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,5,4,-1,1,2,6,5,-1,2,3,7,6,-1,3,0,4,7,-1],solid=False,
              coord=Coordinate(point=[(0,0,0),(1.34,0,0),(0.9,0,0.182),(0.44,0,0.182),(0,0.963,0),(1.34,0.963,0),(0.9,0.963,0.182),(0.44,0.963,0.182)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))])]),
      Transform(DEF='finestra21',translation=(-1.5,2.495,3.145),
        children=[
        Transform(translation=(0,0,-0.15),rotation=(1,0,0,0),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,5,4,-1,1,2,6,5,-1,2,3,7,6,-1,3,0,4,7,-1],solid=False,
              coord=Coordinate(point=[(0,0,0),(1.34,0,0),(0.9,0,-0.182),(0.44,0,-0.182),(0,0.963,0),(1.34,0.963,0),(0.9,0.963,-0.182),(0.44,0.963,-0.182)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))])])]),
    Transform(DEF='MuroFrontsx',translation=(-2.87,2.616,0),
      children=[
      Shape(
        geometry=Box(size=(1.56,0.963,1.34)),
        appearance=Appearance(
          material=Material(diffuseColor=(1,0.75,0.25))))]),
    Transform(DEF='MuroFrontdx',translation=(1.205,2.616,0),
      children=[
      Shape(
        geometry=Box(size=(4.882,0.963,1.34)),
        appearance=Appearance(
          material=Material(diffuseColor=(1,0.75,0.25))))]),
    Transform(translation=(3.65,-2.13,-0.67),
      children=[
      Shape(
        geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,6,5,-1,0,4,9,5,-1,4,3,8,9,-1,3,2,7,8,-1,1,2,7,6,-1,0,1,2,3,4,-1,5,6,7,8,9,-1],solid=False,
          coord=Coordinate(point=[(0,0,0),(0,0,1.34),(0.89,0,1.34),(0.89,0,0.58),(0.32,0,0.58),(0,4.27,0),(0,4.27,1.34),(0.89,4.27,1.34),(0.89,4.27,0.58),(0.32,4.27,0.58)])),
        appearance=Appearance(
          material=Material(diffuseColor=(1,0.75,0.25))))]),
    #  Ground Floor - right  
    Transform(DEF='termine1',translation=(6.9,-2.13,0.67),
      children=[
      Shape(
        geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,5,4,-1,1,2,6,5,-1,2,3,7,6,-1,3,0,4,7,-1,0,1,2,3,-1,4,5,6,7,-1],solid=False,
          coord=Coordinate(point=[(0,0,0),(0.62,0,0),(0.62,0,-0.8),(0,0,-0.58),(0,4.27,0),(0.62,4.27,0),(0.62,4.27,-0.8),(0,4.27,-0.58)])),
        appearance=Appearance(
          material=Material(diffuseColor=(1,0.75,0.25))))]),
    Transform(DEF='muro frontale',translation=(9.08,0,0),
      children=[
      Shape(
        geometry=Box(size=(3.2,4.27,1.34)),
        appearance=Appearance(
          material=Material(diffuseColor=(1,0.75,0.25))))]),
    Transform(DEF='murolateraleSotto',translation=(10.025,-1.175,-14.8),rotation=(0,0,0,0),
      children=[
      Shape(
        geometry=Box(size=(1.31,1.92,30.85)),
        appearance=Appearance(
          material=Material(diffuseColor=(1,0.75,0.25))))]),
    Transform(DEF='murolaterale1',translation=(10.025,0,-2.94),rotation=(0,0,0,0),
      children=[
      Shape(
        geometry=Box(size=(1.31,1.92,7.22)),
        appearance=Appearance(
          material=Material(diffuseColor=(1,0.75,0.25))))]),
    Group(DEF='finEmuro',
      children=[
      Group(DEF='finestra',
        children=[
        Transform(DEF='terminixfin',translation=(9.37,-0.23,-6.55),
          children=[
          Transform(DEF='terminexfin1',
            children=[
            Shape(
              geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,5,4,-1,1,2,6,5,-1,2,3,7,6,-1,3,0,4,7,-1,0,1,2,3,-1,4,5,6,7,-1],solid=False,
                coord=Coordinate(point=[(0,0,0),(1.31,0,0),(1.31,0,-0.149),(0.89,0,-0.149),(0,2.75,0),(1.31,2.75,0),(1.31,2.75,-0.149),(0.89,2.75,-0.149)])),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0.75,0.25))))]),
          Transform(DEF='terminexfin2',translation=(0,0,-1.71),
            children=[
            Shape(
              geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,5,4,-1,1,2,6,5,-1,2,3,7,6,-1,3,0,4,7,-1,0,1,2,3,-1,4,5,6,7,-1],solid=False,
                coord=Coordinate(point=[(0,0,0),(1.31,0,0),(1.31,0,0.149),(0.89,0,0.149),(0,2.75,0),(1.31,2.75,0),(1.31,2.75,0.149),(0.89,2.75,0.149)])),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0.75,0.25))))])])]),
      Transform(DEF='murolaterale2',translation=(10.025,0,-11.82),rotation=(0,0,0,0),
        children=[
        Shape(
          geometry=Box(size=(1.31,1.92,7.13)),
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.75,0.25))))])]),
    Transform(DEF='murolaterale3',translation=(0,0,-8.83),rotation=(0,0,0,0),
      children=[
      Group(USE='finEmuro')]),
    Transform(DEF='terminexfin3',translation=(0,0,-17.65),rotation=(0,0,0,0),
      children=[
      Group(USE='finestra')]),
    Transform(DEF='muroTransettoSotto1',translation=(11.3065,-1.175,-30.73),
      children=[
      Shape(
        geometry=Box(size=(3.874,1.92,1.01)),
        appearance=Appearance(
          material=Material(diffuseColor=(1,0.75,0.25))))]),
    Group(DEF='porta',
      children=[
      Transform(DEF='terminixpor',translation=(13.24,-2.135,-31.235),rotation=(0,1,0,-1.57),
        children=[
        Transform(DEF='terminexpor1',
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,5,4,-1,1,2,6,5,-1,2,3,7,6,-1,3,0,4,7,-1,0,1,2,3,-1,4,5,6,7,-1],solid=False,
              coord=Coordinate(point=[(0,0,0),(1.01,0,0),(1.01,0,-0.149),(0.76,0,-0.149),(0,2.75,0),(1.01,2.75,0),(1.01,2.75,-0.149),(0.76,2.75,-0.149)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))]),
        Transform(DEF='terminexpor2',translation=(0,0,-1.71),
          children=[
          Shape(
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,5,4,-1,1,2,6,5,-1,2,3,7,6,-1,3,0,4,7,-1,0,1,2,3,-1,4,5,6,7,-1],solid=False,
              coord=Coordinate(point=[(0,0,0),(1.01,0,0),(1.01,0,0.149),(0.76,0,0.149),(0,2.75,0),(1.01,2.75,0),(1.01,2.75,0.149),(0.76,2.75,0.149)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.75,0.25))))])])]),
    Transform(DEF='muroTransettoSotto2',translation=(16.23,-1.175,-30.73),
      children=[
      Shape(
        geometry=Box(size=(2.57,1.92,1.01)),
        appearance=Appearance(
          material=Material(diffuseColor=(1,0.75,0.25))))]),
    Transform(DEF='muroTransettoSotto3',translation=(17.01,-1.175,-35.40),
      children=[
      Shape(
        geometry=Box(size=(1.01,1.92,8.34)),
        appearance=Appearance(
          material=Material(diffuseColor=(1,0.75,0.25))))]),
    Transform(DEF='terminexfin4',translation=(47.73,2,-20.76),rotation=(0,1,0,1.57),
      children=[
      Group(USE='porta')]),
    Transform(DEF='muroTransettoSotto4',translation=(13.4475,-1.175,-39.065),
      children=[
      Shape(
        geometry=Box(size=(6.145,1.92,1.01)),
        appearance=Appearance(
          material=Material(diffuseColor=(1,0.75,0.25))))]),
    Transform(DEF='muroTransettoSotto5',translation=(9.875,-1.175,-39.285),
      children=[
      Shape(
        geometry=Box(size=(1.01,1.92,1.45)),
        appearance=Appearance(
          material=Material(diffuseColor=(1,0.75,0.25))))]),
    Transform(DEF='muroTransettoSotto6',translation=(9.875,-1.175,-43.52),
      children=[
      Shape(
        geometry=Box(size=(1.01,1.92,3.62)),
        appearance=Appearance(
          material=Material(diffuseColor=(1,0.75,0.25))))]),
    Transform(DEF='terminexfin5',translation=(40.6,0,-26.74),rotation=(0,1,0,1.57),
      children=[
      Group(USE='porta')]),
    Transform(DEF='terminixporUnica',translation=(10.38,-2.135,-45.33),
      children=[
      Transform(DEF='terminexpor1',
        children=[
        Shape(
          geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,5,4,-1,1,2,6,5,-1,2,3,7,6,-1,3,0,4,7,-1,0,1,2,3,-1,4,5,6,7,-1],solid=False,
            coord=Coordinate(point=[(0,0,0),(-1.01,0,0),(-1.01,0,-0.4),(-0.78,0,-0.4),(0,2.75,0),(-1.01,2.75,0),(-1.01,2.75,-0.4),(-0.78,2.75,-0.4)])),
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.75,0.25))))]),
      Transform(DEF='terminexpor2',translation=(0,0,-1.61),
        children=[
        Shape(
          geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,5,4,-1,1,2,6,5,-1,2,3,7,6,-1,3,0,4,7,-1,0,1,2,3,-1,4,5,6,7,-1],solid=False,
            coord=Coordinate(point=[(0,0,0),(-1.01,0,0),(-1.01,0,0.4),(-0.78,0,0.4),(0,2.75,0),(-1.01,2.75,0),(-1.01,2.75,0.4),(-0.78,2.75,0.4)])),
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.75,0.25))))])]),
    Transform(DEF='muroTransettoSotto333',translation=(9.875,-1.175,-47.405),
      children=[
      Shape(
        geometry=Box(size=(1.01,1.92,0.93)),
        appearance=Appearance(
          material=Material(diffuseColor=(1,0.75,0.25))))]),
    #  Ground Floor - right - small rooms  
    Transform(translation=(7.55,0,-1.32),rotation=(0,0,0,0),
      children=[
      Shape(
        geometry=Box(size=(0.14,4.27,1.35)),
        appearance=Appearance(
          material=Material(diffuseColor=(1,0.75,0.25))))]),
    Transform(translation=(9.3,0,-2.1),rotation=(0,0,0,0),
      children=[
      Shape(
        geometry=Box(size=(0.19,4.27,0.22)),
        appearance=Appearance(
          material=Material(diffuseColor=(1,0.75,0.25))))]),
    Transform(translation=(7.64,0,-2.1),rotation=(0,0,0,0),
      children=[
      Shape(
        geometry=Box(size=(0.32,4.27,0.22)),
        appearance=Appearance(
          material=Material(diffuseColor=(1,0.75,0.25))))]),
    Transform(translation=(7.18,0,-2.1),rotation=(0,0,0,0),
      children=[
      Shape(
        geometry=Box(size=(0.61,4.27,0.22)),
        appearance=Appearance(
          material=Material(diffuseColor=(1,0.75,0.25))))]),
    Transform(translation=(7.28,0,-2.35),rotation=(0,0,0,0),
      children=[
      Shape(
        geometry=Box(size=(0.22,4.27,0.33)),
        appearance=Appearance(
          material=Material(diffuseColor=(1,0.75,0.25))))]),
    Transform(translation=(7.28,0,-3.89),rotation=(0,0,0,0),
      children=[
      Shape(
        geometry=Box(size=(0.22,4.27,0.33)),
        appearance=Appearance(
          material=Material(diffuseColor=(1,0.75,0.25))))]),
    Transform(translation=(8.32,0,-4.1),rotation=(0,0,0,0),
      children=[
      Shape(
        geometry=Box(size=(2.3,4.27,0.14)),
        appearance=Appearance(
          material=Material(diffuseColor=(1,0.75,0.25))))]),
    #  Ground Floor - left  
    Transform(DEF='murolateraleSotto',translation=(1.535,-1.175,-16.58),rotation=(0,0,0,0),
      children=[
      Shape(
        geometry=Box(size=(1.31,1.92,29.24)),
        appearance=Appearance(
          material=Material(diffuseColor=(1,0.75,0.25))))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for *enter FileNameWithNoAbbreviations.py")
