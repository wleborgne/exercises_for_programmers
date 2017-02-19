defmodule Hello do
  @moduledoc """
  Documentation for Hello.
  """

  def hello do
    get_name()
    |> build_output
    |> IO.puts
  end

  def get_name do
    IO.gets("What is your name? ")
    |> String.trim
  end

  def build_output(name) do
    "Hello, #{name}, nice to meet you!"
  end
end
