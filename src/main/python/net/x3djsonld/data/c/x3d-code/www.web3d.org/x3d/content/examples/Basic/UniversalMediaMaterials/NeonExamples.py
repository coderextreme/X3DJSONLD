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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='NeonExamples.x3d',name='title'),
    meta(content="Example ExternProtoDeclare/ProtoInstance usage of X3D/VRML materials, originally converted from SGI's Open Inventor material examples.",name='description'),
    meta(content='David Roussel',name='creator'),
    meta(content='James Harney, Don Brutzman NPS',name='translator'),
    meta(content='7 April 2002',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://vrmlstuff.free.fr/materials',name='reference'),
    meta(content='Universal Media Material Library',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonExamples.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='NeonExamples.x3d'),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon00',url=["NeonPrototypes.x3d#Neon00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.x3d#Neon00","NeonPrototypes.wrl#Neon00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.wrl#Neon00"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon01',url=["NeonPrototypes.x3d#Neon01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.x3d#Neon01","NeonPrototypes.wrl#Neon01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.wrl#Neon01"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon02',url=["NeonPrototypes.x3d#Neon02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.x3d#Neon02","NeonPrototypes.wrl#Neon02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.wrl#Neon02"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon03',url=["NeonPrototypes.x3d#Neon03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.x3d#Neon03","NeonPrototypes.wrl#Neon03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.wrl#Neon03"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon04',url=["NeonPrototypes.x3d#Neon04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.x3d#Neon04","NeonPrototypes.wrl#Neon04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.wrl#Neon04"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon05',url=["NeonPrototypes.x3d#Neon05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.x3d#Neon05","NeonPrototypes.wrl#Neon05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.wrl#Neon05"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon06',url=["NeonPrototypes.x3d#Neon06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.x3d#Neon06","NeonPrototypes.wrl#Neon06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.wrl#Neon06"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon07',url=["NeonPrototypes.x3d#Neon07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.x3d#Neon07","NeonPrototypes.wrl#Neon07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.wrl#Neon07"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon08',url=["NeonPrototypes.x3d#Neon08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.x3d#Neon08","NeonPrototypes.wrl#Neon08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.wrl#Neon08"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon09',url=["NeonPrototypes.x3d#Neon09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.x3d#Neon09","NeonPrototypes.wrl#Neon09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.wrl#Neon09"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon10',url=["NeonPrototypes.x3d#Neon10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.x3d#Neon10","NeonPrototypes.wrl#Neon10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.wrl#Neon10"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon11',url=["NeonPrototypes.x3d#Neon11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.x3d#Neon11","NeonPrototypes.wrl#Neon11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.wrl#Neon11"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon12',url=["NeonPrototypes.x3d#Neon12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.x3d#Neon12","NeonPrototypes.wrl#Neon12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.wrl#Neon12"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon13',url=["NeonPrototypes.x3d#Neon13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.x3d#Neon13","NeonPrototypes.wrl#Neon13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.wrl#Neon13"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon14',url=["NeonPrototypes.x3d#Neon14","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.x3d#Neon14","NeonPrototypes.wrl#Neon14","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.wrl#Neon14"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon15',url=["NeonPrototypes.x3d#Neon15","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.x3d#Neon15","NeonPrototypes.wrl#Neon15","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.wrl#Neon15"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon16',url=["NeonPrototypes.x3d#Neon16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.x3d#Neon16","NeonPrototypes.wrl#Neon16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.wrl#Neon16"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon17',url=["NeonPrototypes.x3d#Neon17","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.x3d#Neon17","NeonPrototypes.wrl#Neon17","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.wrl#Neon17"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon18',url=["NeonPrototypes.x3d#Neon18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.x3d#Neon18","NeonPrototypes.wrl#Neon18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.wrl#Neon18"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon19',url=["NeonPrototypes.x3d#Neon19","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.x3d#Neon19","NeonPrototypes.wrl#Neon19","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.wrl#Neon19"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon20',url=["NeonPrototypes.x3d#Neon20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.x3d#Neon20","NeonPrototypes.wrl#Neon20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.wrl#Neon20"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon21',url=["NeonPrototypes.x3d#Neon21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.x3d#Neon21","NeonPrototypes.wrl#Neon21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.wrl#Neon21"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon22',url=["NeonPrototypes.x3d#Neon22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.x3d#Neon22","NeonPrototypes.wrl#Neon22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.wrl#Neon22"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon23',url=["NeonPrototypes.x3d#Neon23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.x3d#Neon23","NeonPrototypes.wrl#Neon23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.wrl#Neon23"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon24',url=["NeonPrototypes.x3d#Neon24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.x3d#Neon24","NeonPrototypes.wrl#Neon24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.wrl#Neon24"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon25',url=["NeonPrototypes.x3d#Neon25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.x3d#Neon25","NeonPrototypes.wrl#Neon25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.wrl#Neon25"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon26',url=["NeonPrototypes.x3d#Neon26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.x3d#Neon26","NeonPrototypes.wrl#Neon26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.wrl#Neon26"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon27',url=["NeonPrototypes.x3d#Neon27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.x3d#Neon27","NeonPrototypes.wrl#Neon27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.wrl#Neon27"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon28',url=["NeonPrototypes.x3d#Neon28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.x3d#Neon28","NeonPrototypes.wrl#Neon28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.wrl#Neon28"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon29',url=["NeonPrototypes.x3d#Neon29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.x3d#Neon29","NeonPrototypes.wrl#Neon29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.wrl#Neon29"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon30',url=["NeonPrototypes.x3d#Neon30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.x3d#Neon30","NeonPrototypes.wrl#Neon30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.wrl#Neon30"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon31',url=["NeonPrototypes.x3d#Neon31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.x3d#Neon31","NeonPrototypes.wrl#Neon31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.wrl#Neon31"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon32',url=["NeonPrototypes.x3d#Neon32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.x3d#Neon32","NeonPrototypes.wrl#Neon32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.wrl#Neon32"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon33',url=["NeonPrototypes.x3d#Neon33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.x3d#Neon33","NeonPrototypes.wrl#Neon33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.wrl#Neon33"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Neon34',url=["NeonPrototypes.x3d#Neon34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.x3d#Neon34","NeonPrototypes.wrl#Neon34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.wrl#Neon34"]),
    Group(
      children=[
      NavigationInfo(headlight=False),
      Viewpoint(DEF='Front',description='Front view',position=(0.0,0.0,12.0)),
      Viewpoint(DEF='PersRight',description='Low Right',orientation=(0.74291,0.30772,0.59447,1.2171),position=(6.9282,-6.9282,6.9282)),
      Viewpoint(DEF='PersLeft',description='Low Left',orientation=(0.74291,-0.30772,-0.59447,1.2171),position=(-6.9282,-6.9282,6.9282)),
      Viewpoint(DEF='Back',description='Back view',orientation=(0.0,1.0,0.0,3.1416),position=(0.0,0.0,-12.0)),
      Transform(DEF='Close_travel',
        children=[
        PositionInterpolator(DEF='Close_Mover',key=[0.0,0.25,0.5,0.75,1.0],keyValue=[(0.0,2.5,0.0),(0.0,0.0,0.0),(0.0,-2.5,0.0),(0.0,0.0,0.0),(0.0,2.5,0.0)]),
        TimeSensor(DEF='Close_Time',cycleInterval=12.0,loop=True),
        Viewpoint(DEF='Close',description='Close Front',position=(0.0,0.0,6.0))]),
      DirectionalLight(direction=(1.0,-1.0,-1.0)),
      DirectionalLight(direction=(0.0,1.0,-0.5),intensity=0.5),
      Anchor(description='Back to front view',url=["#Front"],
        children=[
        Transform(translation=(0.0,0.0,-0.5),
          children=[
          Inline(url=["gridBack.x3d","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.x3d","gridBack.wrl","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.wrl"])])]),
      Viewpoint(DEF='View00',description='Neon00',position=(-3.75,3.75,3.0)),
      Transform(translation=(-3.75,3.75,0.0),
        children=[
        Anchor(description='Neon00 view',url=["#View00"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Neon00')),
            geometry=Sphere(DEF='Ball',radius=0.5))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Neon00',parameter=["target=_source"],url=["NeonPrototypes.html#ProtoDeclare_Neon00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.html#ProtoDeclare_Neon00"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(DEF='TextMat',diffuseColor=(1.0,1.0,1.0))),
              geometry=Text(string=["Neon00"],
                fontStyle=FontStyle(DEF='Style',family=["SANS"],justify=["MIDDLE","MIDDLE"],size=0.3,style_='BOLD')))])])]),
      Viewpoint(DEF='View01',description='Neon01',position=(-2.25,3.75,3.0)),
      Transform(translation=(-2.25,3.75,0.0),
        children=[
        Anchor(description='Neon01 view',url=["#View01"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Neon01')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Neon01',parameter=["target=_source"],url=["NeonPrototypes.html#ProtoDeclare_Neon01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.html#ProtoDeclare_Neon01"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Neon01"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View02',description='Neon02',position=(-0.75,3.75,3.0)),
      Transform(translation=(-0.75,3.75,0.0),
        children=[
        Anchor(description='Neon02 view',url=["#View02"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Neon02')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Neon02',parameter=["target=_source"],url=["NeonPrototypes.html#ProtoDeclare_Neon02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.html#ProtoDeclare_Neon02"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Neon02"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View03',description='Neon03',position=(0.75,3.75,3.0)),
      Transform(translation=(0.75,3.75,0.0),
        children=[
        Anchor(description='Neon03 view',url=["#View03"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Neon03')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Neon03',parameter=["target=_source"],url=["NeonPrototypes.html#ProtoDeclare_Neon03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.html#ProtoDeclare_Neon03"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Neon03"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View04',description='Neon04',position=(2.25,3.75,3.0)),
      Transform(translation=(2.25,3.75,0.0),
        children=[
        Anchor(description='Neon04 view',url=["#View04"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Neon04')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Neon04',parameter=["target=_source"],url=["NeonPrototypes.html#ProtoDeclare_Neon04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.html#ProtoDeclare_Neon04"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Neon04"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View05',description='Neon05',position=(3.75,3.75,3.0)),
      Transform(translation=(3.75,3.75,0.0),
        children=[
        Anchor(description='Neon05 view',url=["#View05"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Neon05')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Neon05',parameter=["target=_source"],url=["NeonPrototypes.html#ProtoDeclare_Neon05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.html#ProtoDeclare_Neon05"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Neon05"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View06',description='Neon06',position=(-3.75,2.25,3.0)),
      Transform(translation=(-3.75,2.25,0.0),
        children=[
        Anchor(description='Neon06 view',url=["#View06"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Neon06')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Neon06',parameter=["target=_source"],url=["NeonPrototypes.html#ProtoDeclare_Neon06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.html#ProtoDeclare_Neon06"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Neon06"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View07',description='Neon07',position=(-2.25,2.25,3.0)),
      Transform(translation=(-2.25,2.25,0.0),
        children=[
        Anchor(description='Neon07 view',url=["#View07"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Neon07')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Neon07',parameter=["target=_source"],url=["NeonPrototypes.html#ProtoDeclare_Neon07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.html#ProtoDeclare_Neon07"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Neon07"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View08',description='Neon08',position=(-0.75,2.25,3.0)),
      Transform(translation=(-0.75,2.25,0.0),
        children=[
        Anchor(description='Neon08 view',url=["#View08"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Neon08')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Neon08',parameter=["target=_source"],url=["NeonPrototypes.html#ProtoDeclare_Neon08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.html#ProtoDeclare_Neon08"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Neon08"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View09',description='Neon09',position=(0.75,2.25,3.0)),
      Transform(translation=(0.75,2.25,0.0),
        children=[
        Anchor(description='Neon09 view',url=["#View09"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Neon09')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Neon09',parameter=["target=_source"],url=["NeonPrototypes.html#ProtoDeclare_Neon09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.html#ProtoDeclare_Neon09"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Neon09"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View10',description='Neon10',position=(2.25,2.25,3.0)),
      Transform(translation=(2.25,2.25,0.0),
        children=[
        Anchor(description='Neon10 view',url=["#View10"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Neon10')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Neon10',parameter=["target=_source"],url=["NeonPrototypes.html#ProtoDeclare_Neon10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.html#ProtoDeclare_Neon10"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Neon10"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View11',description='Neon11',position=(3.75,2.25,3.0)),
      Transform(translation=(3.75,2.25,0.0),
        children=[
        Anchor(description='Neon11 view',url=["#View11"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Neon11')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Neon11',parameter=["target=_source"],url=["NeonPrototypes.html#ProtoDeclare_Neon11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.html#ProtoDeclare_Neon11"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Neon11"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View12',description='Neon12',position=(-3.75,0.75,3.0)),
      Transform(translation=(-3.75,0.75,0.0),
        children=[
        Anchor(description='Neon12 view',url=["#View12"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Neon12')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Neon12',parameter=["target=_source"],url=["NeonPrototypes.html#ProtoDeclare_Neon12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.html#ProtoDeclare_Neon12"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Neon12"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View13',description='Neon13',position=(-2.25,0.75,3.0)),
      Transform(translation=(-2.25,0.75,0.0),
        children=[
        Anchor(description='Neon13 view',url=["#View13"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Neon13')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Neon13',parameter=["target=_source"],url=["NeonPrototypes.html#ProtoDeclare_Neon13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.html#ProtoDeclare_Neon13"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Neon13"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View14',description='Neon14',position=(-0.75,0.75,3.0)),
      Transform(translation=(-0.75,0.75,0.0),
        children=[
        Anchor(description='Neon14 view',url=["#View14"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Neon14')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Neon14',parameter=["target=_source"],url=["NeonPrototypes.html#ProtoDeclare_Neon4","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.html#ProtoDeclare_Neon14"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Neon14"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View15',description='Neon15',position=(0.75,0.75,3.0)),
      Transform(translation=(0.75,0.75,0.0),
        children=[
        Anchor(description='Neon15 view',url=["#View15"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Neon15')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Neon15',parameter=["target=_source"],url=["NeonPrototypes.html#ProtoDeclare_Neon5","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.html#ProtoDeclare_Neon15"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Neon15"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View16',description='Neon16',position=(2.25,0.75,3.0)),
      Transform(translation=(2.25,0.75,0.0),
        children=[
        Anchor(description='Neon16 view',url=["#View16"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Neon16')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Neon16',parameter=["target=_source"],url=["NeonPrototypes.html#ProtoDeclare_Neon16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.html#ProtoDeclare_Neon16"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Neon16"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View17',description='Neon17',position=(3.75,0.75,3.0)),
      Transform(translation=(3.75,0.75,0.0),
        children=[
        Anchor(description='Neon17 view',url=["#View17"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Neon17')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Neon17',parameter=["target=_source"],url=["NeonPrototypes.html#ProtoDeclare_Neon17","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.html#ProtoDeclare_Neon17"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Neon17"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View18',description='Neon18',position=(-3.75,-0.75,3.0)),
      Transform(translation=(-3.75,-0.75,0.0),
        children=[
        Anchor(description='Neon18 view',url=["#View18"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Neon18')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Neon18',parameter=["target=_source"],url=["NeonPrototypes.html#ProtoDeclare_Neon18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.html#ProtoDeclare_Neon18"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Neon18"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View19',description='Neon19',position=(-2.25,-0.75,3.0)),
      Transform(translation=(-2.25,-0.75,0.0),
        children=[
        Anchor(description='Neon19 view',url=["#View19"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Neon19')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Neon19',parameter=["target=_source"],url=["NeonPrototypes.html#ProtoDeclare_Neon19","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.html#ProtoDeclare_Neon19"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Neon19"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View20',description='Neon20',position=(-0.75,-0.75,3.0)),
      Transform(translation=(-0.75,-0.75,0.0),
        children=[
        Anchor(description='Neon20 view',url=["#View20"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Neon20')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Neon20',parameter=["target=_source"],url=["NeonPrototypes.html#ProtoDeclare_Neon20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.html#ProtoDeclare_Neon20"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Neon20"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View21',description='Neon21',position=(0.75,-0.75,3.0)),
      Transform(translation=(0.75,-0.75,0.0),
        children=[
        Anchor(description='Neon21 view',url=["#View21"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Neon21')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Neon21',parameter=["target=_source"],url=["NeonPrototypes.html#ProtoDeclare_Neon21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.html#ProtoDeclare_Neon21"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Neon21"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View22',description='Neon22',position=(2.25,-0.75,3.0)),
      Transform(translation=(2.25,-0.75,0.0),
        children=[
        Anchor(description='Neon22 view',url=["#View22"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Neon22')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Neon22',parameter=["target=_source"],url=["NeonPrototypes.html#ProtoDeclare_Neon22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.html#ProtoDeclare_Neon22"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Neon22"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View23',description='Neon23',position=(3.75,-0.75,3.0)),
      Transform(translation=(3.75,-0.75,0.0),
        children=[
        Anchor(description='Neon23 view',url=["#View23"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Neon23')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Neon23',parameter=["target=_source"],url=["NeonPrototypes.html#ProtoDeclare_Neon23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.html#ProtoDeclare_Neon23"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Neon23"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View24',description='Neon24',position=(-3.75,-2.25,3.0)),
      Transform(translation=(-3.75,-2.25,0.0),
        children=[
        Anchor(description='Neon24 view',url=["#View24"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Neon24')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Neon24',parameter=["target=_source"],url=["NeonPrototypes.html#ProtoDeclare_Neon24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.html#ProtoDeclare_Neon24"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Neon24"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View25',description='Neon25',position=(-2.25,-2.25,3.0)),
      Transform(translation=(-2.25,-2.25,0.0),
        children=[
        Anchor(description='Neon25 view',url=["#View25"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Neon25')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Neon25',parameter=["target=_source"],url=["NeonPrototypes.html#ProtoDeclare_Neon25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.html#ProtoDeclare_Neon25"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Neon25"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View26',description='Neon26',position=(-0.75,-2.25,3.0)),
      Transform(translation=(-0.75,-2.25,0.0),
        children=[
        Anchor(description='Neon26 view',url=["#View26"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Neon26')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Neon26',parameter=["target=_source"],url=["NeonPrototypes.html#ProtoDeclare_Neon26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.html#ProtoDeclare_Neon26"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Neon26"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View27',description='Neon27',position=(0.75,-2.25,3.0)),
      Transform(translation=(0.75,-2.25,0.0),
        children=[
        Anchor(description='Neon27 view',url=["#View27"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Neon27')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Neon27',parameter=["target=_source"],url=["NeonPrototypes.html#ProtoDeclare_Neon27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.html#ProtoDeclare_Neon27"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Neon27"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View28',description='Neon28',position=(2.25,-2.25,3.0)),
      Transform(translation=(2.25,-2.25,0.0),
        children=[
        Anchor(description='Neon28 view',url=["#View28"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Neon28')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Neon28',parameter=["target=_source"],url=["NeonPrototypes.html#ProtoDeclare_Neon28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.html#ProtoDeclare_Neon28"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Neon28"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View29',description='Neon29',position=(3.75,-2.25,3.0)),
      Transform(translation=(3.75,-2.25,0.0),
        children=[
        Anchor(description='Neon29 view',url=["#View29"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Neon29')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Neon29',parameter=["target=_source"],url=["NeonPrototypes.html#ProtoDeclare_Neon29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.html#ProtoDeclare_Neon29"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Neon29"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View30',description='Neon30',position=(-3.75,-3.75,3.0)),
      Transform(translation=(-3.75,-3.75,0.0),
        children=[
        Anchor(description='Neon30 view',url=["#View30"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Neon30')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Neon30',parameter=["target=_source"],url=["NeonPrototypes.html#ProtoDeclare_Neon30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.html#ProtoDeclare_Neon30"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Neon30"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View31',description='Neon31',position=(-2.25,-3.75,3.0)),
      Transform(translation=(-2.25,-3.75,0.0),
        children=[
        Anchor(description='Neon31 view',url=["#View31"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Neon31')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Neon31',parameter=["target=_source"],url=["NeonPrototypes.html#ProtoDeclare_Neon31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.html#ProtoDeclare_Neon31"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Neon31"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View32',description='Neon32',position=(-0.75,-3.75,3.0)),
      Transform(translation=(-0.75,-3.75,0.0),
        children=[
        Anchor(description='Neon32 view',url=["#View32"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Neon32')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Neon32',parameter=["target=_source"],url=["NeonPrototypes.html#ProtoDeclare_Neon32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.html#ProtoDeclare_Neon32"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Neon32"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View33',description='Neon33',position=(0.75,-3.75,3.0)),
      Transform(translation=(0.75,-3.75,0.0),
        children=[
        Anchor(description='Neon33 view',url=["#View33"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Neon33')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Neon33',parameter=["target=_source"],url=["NeonPrototypes.html#ProtoDeclare_Neon33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.html#ProtoDeclare_Neon33"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Neon33"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View34',description='Neon34',position=(2.25,-3.75,3.0)),
      Transform(translation=(2.25,-3.75,0.0),
        children=[
        Anchor(description='Neon34 view',url=["#View34"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Neon34')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Neon34',parameter=["target=_source"],url=["NeonPrototypes.html#ProtoDeclare_Neon34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/NeonPrototypes.html#ProtoDeclare_Neon34"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Neon34"],
                fontStyle=FontStyle(USE='Style')))])])])]),
    ROUTE(fromField='fraction_changed',fromNode='Close_Time',toField='set_fraction',toNode='Close_Mover'),
    ROUTE(fromField='value_changed',fromNode='Close_Mover',toField='set_translation',toNode='Close_travel')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for NeonExamples.py")
